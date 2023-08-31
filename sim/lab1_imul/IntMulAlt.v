//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

`ifndef LAB1_IMUL_INT_MUL_ALT_V
`define LAB1_IMUL_INT_MUL_ALT_V

`include "vc/trace.v"
`include "vc/counters.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

module lab1_imul_IntMulAlt
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg
);

  // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Instantiate datapath and control models here and then connect them
  // together.
  // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  logic b_mux_sel;
  logic a_mux_sel;
  logic result_mux_sel;
  logic result_en;
  logic add_mux_sel;
  logic [31:0] b_lsb;
  logic [4:0] b_shamt;
  mul_base_datapath datapath(.clk(clk), .reset(reset), .req_msg(istream_msg), .resp_msg(ostream_msg), .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel),
  .result_en(result_en), .add_mux_sel(add_mux_sel), .b_shamt(b_shamt), .b_lsb(b_lsb));
  mul_base_control control(.clk(clk), .reset(reset), .req_val(istream_val), .req_rdy(istream_rdy), .resp_rdy(ostream_rdy), .resp_val(ostream_val),
  .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel), .result_en(result_en), .add_mux_sel(add_mux_sel), .b_shamt(b_shamt), .b_lsb(b_lsb));

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", istream_msg );
    vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );

    vc_trace.append_str( trace_str, "(" );

    // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Add additional line tracing using the helper tasks for
    // internal state including the current FSM state.
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

module mul_base_datapath
(
  input clk,
  input reset,

  // Data
  input logic [63:0] req_msg,
  output logic [31:0] resp_msg,

  // Ctrl signals
  input logic b_mux_sel,
  input logic a_mux_sel,
  input logic result_mux_sel,
  input logic result_en,
  input logic add_mux_sel,
  input logic[4:0] b_shamt,
  output logic [31:0] b_lsb
);

logic [31:0] a;
logic [31:0] b;

assign a = req_msg[63:32];
assign b = req_msg[31:0];

// B logic ---------------------------------
// B mux
logic [31:0] b_mux_out;
vc_Mux2 #(.p_nbits(32)) b_mux(.in0(r_shift_out), .in1(b), .sel(b_mux_sel), .out(b_mux_out));

// B register
logic [31:0] b_reg_out;
vc_Reg #(.p_nbits(32)) b_reg(.clk(clk), .q(b_reg_out), .d(b_mux_out));
assign b_lsb = b_reg_out;

// B right shifter
logic [31:0] r_shift_out;
vc_RightLogicalShifter #(.p_nbits(32), .p_shamt_nbits(5))  b_r_shifter(.in(b_reg_out), .shamt(b_shamt), .out(r_shift_out));

// A logic ---------------------------------
// A mux
logic [31:0] a_mux_out;
vc_Mux2 #(.p_nbits(32)) a_mux(.in0(l_shift_out), .in1(a), .sel(a_mux_sel), .out(a_mux_out));

// A register
logic [31:0] a_reg_out;
vc_Reg #(.p_nbits(32)) a_reg(.clk(clk), .q(a_reg_out), .d(a_mux_out));

// A left shifter
logic [31:0] l_shift_out;
vc_LeftLogicalShifter #(.p_nbits(32), .p_shamt_nbits(1))  a_l_shifter(.in(a_reg_out), .shamt(1), .out(l_shift_out));

// Result logic ----------------------------
// Result mux
logic [31:0] result_mux_out;
vc_Mux2 #(.p_nbits(32)) result_mux(.in0(add_mux_out), .in1(0), .sel(result_mux_sel), .out(result_mux_out));

// Result register
logic [31:0] result_reg_out;
vc_EnReg #(.p_nbits(32)) result_reg(.clk(clk), .reset(reset), .q(result_reg_out), .d(result_mux_out), .en(result_en));

// Adder
logic [31:0] adder_out;
vc_SimpleAdder #(.p_nbits(32)) result_adder(.in0(a_reg_out), .in1(result_reg_out), .out(adder_out));

// Adder mux
logic [31:0] add_mux_out;
vc_Mux2 #(.p_nbits(32)) adder_mux(.in0(adder_out), .in1(result_reg_out), .sel(add_mux_sel), .out(add_mux_out));

assign resp_msg = result_reg_out;

endmodule

module mul_base_control (
  input clk,
  input reset,

  // Datapath I/O
  input [31:0] b_lsb,
  output logic b_mux_sel,
  output logic a_mux_sel,
  output logic result_en,
  output logic result_mux_sel,
  output logic add_mux_sel,
  output logic[4:0] b_shamt,

  // Parent module I/O
  input logic req_val,
  output logic req_rdy,
  input logic resp_rdy,
  output logic resp_val
);

localparam[1:0]  IDLE = 2'b00, CALC = 2'b01, DONE = 2'b10;
logic [1:0] state;
logic [1:0] nextState;
logic done;

// State register
always_ff @(posedge clk) begin
  // reset state to idle if reset signal high
  if (reset) state <= IDLE;

  // clock in nextState to state on posedge clock
  else state <= nextState;
end

// Next state logic
always_comb begin
  case (state)
    IDLE: begin
      // If input value ready then go to CALC state
      if (req_val) nextState = CALC;
      else nextState = IDLE;
    end
    CALC: begin
      // If counter is done then go to DONE state
      if (done) nextState = DONE;
      else nextState = CALC;
    end
    DONE: begin
      // If output device ready to receive value then go back to IDLE state
      if (resp_rdy) nextState = IDLE;
      else nextState = DONE;
    end
    default: nextState = IDLE;
  endcase
end

// Output logic
always_comb begin
  case(state)
    IDLE: begin
      // Do not shift a and b
      b_mux_sel = 1;
      a_mux_sel = 1;
      b_shamt = 0;

      // Set result to 0 and disable reg
      result_mux_sel = 1;
      result_en = 1;

      // Do not add result of adder to result
      add_mux_sel = 1;

      // Ready to receive input and not ready to output value
      req_rdy = 1;
      resp_val = 0;

      done = 0;
    end
    CALC: begin
      // Shift a and b
      b_mux_sel = 0;
      a_mux_sel = 0;

      // Enable result register on clock and do not pass in 0 from mux
      result_en = 1;
      result_mux_sel = 0;

      // Not ready to receive new input and output value not ready
      req_rdy = 0;
      resp_val = 0;

      if (b_lsb[0] == 0) begin
        add_mux_sel = 1;
        if (b_lsb == 32'b0) done = 1;
        else done = 0;
      end
      else begin
        add_mux_sel = 0;
        done = 0;
      end
      if (b_lsb[1]) b_shamt = 1;
      else if (b_lsb[2]) b_shamt = 2;
      else if (b_lsb[3]) b_shamt = 3;
      else if (b_lsb[4]) b_shamt = 4;
      else if (b_lsb[5]) b_shamt = 5;
      else if (b_lsb[6]) b_shamt = 6;
      else if (b_lsb[7]) b_shamt = 7;
      else if (b_lsb[8]) b_shamt = 8;
      else if (b_lsb[9]) b_shamt = 9;
      else if (b_lsb[10]) b_shamt = 10;
      else if (b_lsb[11]) b_shamt = 11;
      else if (b_lsb[12]) b_shamt = 12;
      else if (b_lsb[13]) b_shamt = 13;
      else if (b_lsb[14]) b_shamt = 14;
      else if (b_lsb[15]) b_shamt = 15;
      else if (b_lsb[16]) b_shamt = 16;
      else if (b_lsb[17]) b_shamt = 17;
      else if (b_lsb[18]) b_shamt = 18;
      else if (b_lsb[19]) b_shamt = 19;
      else if (b_lsb[20]) b_shamt = 20;
      else if (b_lsb[21]) b_shamt = 21;
      else if (b_lsb[22]) b_shamt = 22;
      else if (b_lsb[23]) b_shamt = 23;
      else if (b_lsb[24]) b_shamt = 24;
      else if (b_lsb[25]) b_shamt = 25;
      else if (b_lsb[26]) b_shamt = 26;
      else if (b_lsb[27]) b_shamt = 27;
      else if (b_lsb[28]) b_shamt = 28;
      else if (b_lsb[29]) b_shamt = 29;
      else if (b_lsb[30]) b_shamt = 30;
      else if (b_lsb[31]) b_shamt = 31;
      else b_shamt = 1;
    end
    DONE: begin
      // Do not shift a and b
      b_mux_sel = 1;
      a_mux_sel = 1;
      b_shamt = 0;

      // Keep result register output previous value before calculation done (not 0)
      result_mux_sel = 0;
      result_en = 0;

      // keep result register updated with current result value
      add_mux_sel = 1;

      // Ready to receive new input and output value is ready
      req_rdy = 1;
      resp_val = 1;

      done = 0;
    end
    default: begin
      // Same as IDLE state
      b_mux_sel = 1;
      a_mux_sel = 1;
      b_shamt = 0;
      result_mux_sel = 1;
      result_en = 0;
      add_mux_sel = 1;
      req_rdy = 1;
      resp_val = 0;
      done = 0;
    end
  endcase
end

endmodule

`endif /* LAB1_IMUL_INT_MUL_ALT_V */
