//      // verilator_coverage annotation
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        
        `ifndef LAB1_IMUL_INT_MUL_BASE_V
        `define LAB1_IMUL_INT_MUL_BASE_V
        
        `include "vc/trace.v"
        `include "vc/counters.v"
        `include "vc/muxes.v"
        `include "vc/regs.v"
        `include "vc/arithmetic.v"
        
        // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        // Define datapath and control unit here.
        // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        module lab1_imul_IntMulBase
        (
 000761   input  logic        clk,
 000001   input  logic        reset,
        
 000020   input  logic        istream_val,
 000020   output logic        istream_rdy,
 000001   input  logic [63:0] istream_msg,
        
 000020   output logic        ostream_val,
 000013   input  logic        ostream_rdy,
 000002   output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\
 000020   logic b_mux_sel;
 000020   logic a_mux_sel;
 000020   logic result_mux_sel;
 000020   logic result_en;
 000094   logic add_mux_sel;
 000008   logic [31:0] b_lsb;
          mul_base_datapath datapath(.clk(clk), .reset(reset), .req_msg(istream_msg), .resp_msg(ostream_msg), .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel),
          .result_en(result_en), .add_mux_sel(add_mux_sel), .b_lsb(b_lsb));
          mul_base_control control(.clk(clk), .reset(reset), .req_val(istream_val), .req_rdy(istream_rdy), .resp_rdy(ostream_rdy), .resp_val(ostream_val),
          .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel), .result_en(result_en), .add_mux_sel(add_mux_sel), .b_lsb(b_lsb));
        
        
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
 000761   input clk,
 000001   input reset,
        
          // Data
 000001   input logic [63:0] req_msg,
 000002   output logic [31:0] resp_msg,
        
          // Ctrl signals
 000020   input logic b_mux_sel,
 000020   input logic a_mux_sel,
 000020   input logic result_mux_sel,
 000020   input logic result_en,
 000094   input logic add_mux_sel,
 000008   output logic [31:0] b_lsb
        );
        
 000001 logic [31:0] a;
 000001 logic [31:0] b;
        
        assign a = req_msg[63:32];
        assign b = req_msg[31:0];
        
        // B logic ---------------------------------
        // B mux
 000008 logic [31:0] b_mux_out;
        vc_Mux2 #(.p_nbits(32)) b_mux(.in0(r_shift_out), .in1(b), .sel(b_mux_sel), .out(b_mux_out));
        
        // B register
 000008 logic [31:0] b_reg_out;
        vc_Reg #(.p_nbits(32)) b_reg(.clk(clk), .q(b_reg_out), .d(b_mux_out));
        assign b_lsb = b_reg_out;
        
        // B right shifter
 000060 logic [31:0] r_shift_out;
        vc_RightLogicalShifter #(.p_nbits(32), .p_shamt_nbits(1))  b_r_shifter(.in(b_reg_out), .shamt(1), .out(r_shift_out));
        
        // A logic ---------------------------------
        // A mux
 000007 logic [31:0] a_mux_out;
        vc_Mux2 #(.p_nbits(32)) a_mux(.in0(l_shift_out), .in1(a), .sel(a_mux_sel), .out(a_mux_out));
        
        // A register
 000007 logic [31:0] a_reg_out;
        vc_Reg #(.p_nbits(32)) a_reg(.clk(clk), .q(a_reg_out), .d(a_mux_out));
        
        // A left shifter
 000007 logic [31:0] l_shift_out;
        vc_LeftLogicalShifter #(.p_nbits(32), .p_shamt_nbits(1))  a_l_shifter(.in(a_reg_out), .shamt(1), .out(l_shift_out));
        
        // Result logic ----------------------------
        // Result mux
 000002 logic [31:0] result_mux_out;
        vc_Mux2 #(.p_nbits(32)) result_mux(.in0(add_mux_out), .in1(0), .sel(result_mux_sel), .out(result_mux_out));
        
        // Result register
 000002 logic [31:0] result_reg_out;
        vc_EnReg #(.p_nbits(32)) result_reg(.clk(clk), .reset(reset), .q(result_reg_out), .d(result_mux_out), .en(result_en));
        
        // Adder
 000007 logic [31:0] adder_out;
        vc_SimpleAdder #(.p_nbits(32)) result_adder(.in0(a_reg_out), .in1(result_reg_out), .out(adder_out));
        
        // Adder mux
 000002 logic [31:0] add_mux_out;
        vc_Mux2 #(.p_nbits(32)) adder_mux(.in0(adder_out), .in1(result_reg_out), .sel(add_mux_sel), .out(add_mux_out));
        
        assign resp_msg = result_reg_out;
        
        endmodule
        
        module mul_base_control (
 000761   input clk,
 000001   input reset,
        
          // Datapath I/O
 000008   input [31:0] b_lsb,
 000020   output logic b_mux_sel,
 000020   output logic a_mux_sel,
 000020   output logic result_en,
 000020   output logic result_mux_sel,
 000094   output logic add_mux_sel,
        
          // Parent module I/O
 000020   input logic req_val,
 000020   output logic req_rdy,
 000013   input logic resp_rdy,
 000020   output logic resp_val
        );
        
        localparam[1:0]  IDLE = 2'b00, CALC = 2'b01, DONE = 2'b10;
 000020 logic [1:0] state;
 000020 logic [1:0] nextState;
        
 000020 logic counter_en;
 000020 logic count_clear;
 000020 logic count_done;
%000000 logic [5:0] count;
 000020 logic count_is_zero;
        vc_BasicCounter #(.p_count_nbits(6), .p_count_clear_value(0), .p_count_max_value(31)) cycle_counter(.clk(clk), .reset(reset), .clear(count_clear), .increment(counter_en), .decrement(0), .count(count), .count_is_zero(count_is_zero), .count_is_max(count_done));
        
        // State register
 000380 always_ff @(posedge clk) begin
          // reset state to idle if reset signal high
 000003   if (reset) state <= IDLE;
        
          // clock in nextState to state on posedge clock
 000377   else state <= nextState;
        end
        
        // Next state logic
%000000 always_comb begin
%000000   case (state)
 000050     IDLE: begin
              // If input value ready then go to CALC state
 000020       if (req_val) nextState = CALC;
 000154       else nextState = IDLE;
            end
 000320     CALC: begin
              // If counter is done then go to DONE state
 000010       if (count_done) nextState = DONE;
 000310       else nextState = CALC;
            end
 000010     DONE: begin
              // If output device ready to receive value then go back to IDLE state
%000000       if (resp_rdy) nextState = IDLE;
%000000       else nextState = DONE;
            end
%000000     default: nextState = IDLE;
          endcase
        end
        
        // Output logic
%000000 always_comb begin
%000000   case(state)
 000050     IDLE: begin
              // Do not shift a and b
 000050       b_mux_sel = 1;
 000050       a_mux_sel = 1;
        
              // Set result to 0 and disable reg
 000050       result_mux_sel = 1;
 000050       result_en = 1;
        
              // Do not add result of adder to result
 000050       add_mux_sel = 1;
        
              // Clear counter to 0 and disable it
 000050       count_clear = 1;
 000050       counter_en = 0;
        
              // Ready to receive input and not ready to output value
 000050       req_rdy = 1;
 000050       resp_val = 0;
            end
 000320     CALC: begin
              // Shift a and b
 000320       b_mux_sel = 0;
 000320       a_mux_sel = 0;
        
              // Do not clear counter and enable it
 000320       count_clear = 0;
 000320       counter_en = 1;
        
              // Enable result register on clock and do not pass in 0 from mux
 000320       result_en = 1;
 000320       result_mux_sel = 0;
        
              // Not ready to receive new input and output value not ready
 000320       req_rdy = 0;
 000320       resp_val = 0;
        
              // If b_lsb is 1 - add result of adder to result
 000102       if (b_lsb[0] == 1) add_mux_sel = 0;
        
              // If b_lsb == 0 - do not add anything to result
 000218       else add_mux_sel = 1;
            end
 000010     DONE: begin
              // Do not shift a and b
 000010       b_mux_sel = 1;
 000010       a_mux_sel = 1;
        
              // Keep result register output previous value before calculation done (not 0)
 000010       result_mux_sel = 0;
 000010       result_en = 0;
        
              // keep result register updated with current result value
 000010       add_mux_sel = 1;
        
              // Clear counter and disable it
 000010       count_clear = 1;
 000010       counter_en = 0;
        
              // Ready to receive new input and output value is ready
 000010       req_rdy = 1;
 000010       resp_val = 1;
            end
%000000     default: begin
              // Same as IDLE state
%000000       b_mux_sel = 1;
%000000       a_mux_sel = 1;
%000000       result_mux_sel = 1;
%000000       result_en = 0;
%000000       add_mux_sel = 1;
%000000       count_clear = 1;
%000000       counter_en = 0;
%000000       req_rdy = 1;
%000000       resp_val = 0;
            end
          endcase
        end
        
        endmodule
        
        `endif /* LAB1_IMUL_INT_MUL_BASE_V */
        
