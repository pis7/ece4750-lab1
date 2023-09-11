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
 013088   input  logic        clk,
 000002   input  logic        reset,
        
 000378   input  logic        istream_val,
 000376   output logic        istream_rdy,
 000052   input  logic [63:0] istream_msg,
        
 000376   output logic        ostream_val,
 000370   input  logic        ostream_rdy,
 000078   output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\
 000376   logic b_mux_sel;
 000376   logic a_mux_sel;
 000376   logic result_mux_sel;
 000376   logic result_en;
 002060   logic add_mux_sel;
 000182   logic [31:0] b_lsb;
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
 013088   input clk,
 000002   input reset,
        
          // Data
 000052   input logic [63:0] req_msg,
 000078   output logic [31:0] resp_msg,
        
          // Ctrl signals
 000376   input logic b_mux_sel,
 000376   input logic a_mux_sel,
 000376   input logic result_mux_sel,
 000376   input logic result_en,
 002060   input logic add_mux_sel,
 000182   output logic [31:0] b_lsb
        );
        
 000052 logic [31:0] a;
 000056 logic [31:0] b;
        
        assign a = req_msg[63:32];
        assign b = req_msg[31:0];
        
        // B logic ---------------------------------
        // B mux
 000182 logic [31:0] b_mux_out;
        vc_Mux2 #(.p_nbits(32)) b_mux(.in0(r_shift_out), .in1(b), .sel(b_mux_sel), .out(b_mux_out));
        
        // B register
 000182 logic [31:0] b_reg_out;
        vc_Reg #(.p_nbits(32)) b_reg(.clk(clk), .q(b_reg_out), .d(b_mux_out));
        assign b_lsb = b_reg_out;
        
        // B right shifter
 001477 logic [31:0] r_shift_out;
        vc_RightLogicalShifter #(.p_nbits(32), .p_shamt_nbits(1))  b_r_shifter(.in(b_reg_out), .shamt(1), .out(r_shift_out));
        
        // A logic ---------------------------------
        // A mux
 000271 logic [31:0] a_mux_out;
        vc_Mux2 #(.p_nbits(32)) a_mux(.in0(l_shift_out), .in1(a), .sel(a_mux_sel), .out(a_mux_out));
        
        // A register
 000269 logic [31:0] a_reg_out;
        vc_Reg #(.p_nbits(32)) a_reg(.clk(clk), .q(a_reg_out), .d(a_mux_out));
        
        // A left shifter
 000269 logic [31:0] l_shift_out;
        vc_LeftLogicalShifter #(.p_nbits(32), .p_shamt_nbits(1))  a_l_shifter(.in(a_reg_out), .shamt(1), .out(l_shift_out));
        
        // Result logic ----------------------------
        // Result mux
 000078 logic [31:0] result_mux_out;
        vc_Mux2 #(.p_nbits(32)) result_mux(.in0(add_mux_out), .in1(0), .sel(result_mux_sel), .out(result_mux_out));
        
        // Result register
 000078 logic [31:0] result_reg_out;
        vc_EnReg #(.p_nbits(32)) result_reg(.clk(clk), .reset(reset), .q(result_reg_out), .d(result_mux_out), .en(result_en));
        
        // Adder
 000235 logic [31:0] adder_out;
        vc_SimpleAdder #(.p_nbits(32)) result_adder(.in0(a_reg_out), .in1(result_reg_out), .out(adder_out));
        
        // Adder mux
 000058 logic [31:0] add_mux_out;
        vc_Mux2 #(.p_nbits(32)) adder_mux(.in0(adder_out), .in1(result_reg_out), .sel(add_mux_sel), .out(add_mux_out));
        
        assign resp_msg = result_reg_out;
        
        endmodule
        
        module mul_base_control (
 013088   input clk,
 000002   input reset,
        
          // Datapath I/O
        
 000182   input [31:0] b_lsb,
 000376   output logic b_mux_sel,
 000376   output logic a_mux_sel,
 000376   output logic result_en,
 000376   output logic result_mux_sel,
 002060   output logic add_mux_sel,
        
          // Parent module I/O
 000378   input logic req_val,
 000376   output logic req_rdy,
 000370   input logic resp_rdy,
 000376   output logic resp_val
        );
        
        
        localparam[1:0]  IDLE = 2'b00, CALC = 2'b01, DONE = 2'b10;
 000376 logic [1:0] state;
 000376 logic [1:0] nextState;
        
 000376 logic counter_en;
 000376 logic count_clear;
 000376 logic count_done;
 000376 logic count_is_zero;
        
        // No connect output for counter count value - not used in our implementation
%000000 logic [5:0] count;
        
        vc_BasicCounter #(
          .p_count_nbits(6), 
          .p_count_clear_value(0), 
          .p_count_max_value(31)
        ) cycle_counter (
          .clk(clk), 
          .reset(reset), 
          .clear(count_clear), 
          .increment(counter_en), 
          .decrement(0), 
          .count(count), 
          .count_is_zero(count_is_zero), 
          .count_is_max(count_done)
        );
        
 006543 function void tab
        (
        input logic t_a_mux_sel,
        input logic t_b_mux_sel,
        
        input logic t_result_mux_sel,
        input logic t_result_en,
        
        input logic t_add_mux_sel, 
        
        input logic t_count_clear,
        input logic t_counter_en,
        input logic t_req_rdy,
        input logic t_resp_val
        );
 006543 begin
 006543   assign a_mux_sel = t_a_mux_sel;
 006543   assign b_mux_sel = t_b_mux_sel;
 006543   assign result_mux_sel = t_result_mux_sel;
 006543   assign result_en = t_result_en;
 006543   assign add_mux_sel = t_add_mux_sel;
 006543   assign count_clear = t_count_clear;
 006543   assign counter_en = t_counter_en;
 006543   assign req_rdy = t_req_rdy;
 006543   assign resp_val = t_resp_val;
        end
        endfunction
        
        // State register
 006543 always_ff @(posedge clk) begin
          // reset state to idle if reset signal high
 000006   if (reset) state <= IDLE;
        
          // clock in nextState to state on posedge clock
 006537   else state <= nextState;
        end
        
        // Next state logic
        // Note: this always_comb block shows no coverage but each case has been tested
%000000 always_comb begin
%000000   case (state)
 000332     IDLE: begin
              // If input value ready then go to CALC state
 000376       if (req_val) nextState = CALC;
 001003       else nextState = IDLE;
            end
 006016     CALC: begin
              // If counter is done then go to DONE state
 000188       if (count_done) nextState = DONE;
 005828       else nextState = CALC;
            end
 000195     DONE: begin
              // If output device ready to receive value then go back to IDLE state
 000021       if (resp_rdy) nextState = IDLE;
 000021       else nextState = DONE;
            end
            default: begin
              $stop;
              nextState = IDLE;
            end
          endcase
        end
        
        // Output logic
        // Note: this always_comb block shows no coverage but each case has been tested
%000000 always_comb begin
%000000   case(state)
 000332     IDLE: begin
 000332       tab(1, 1, 1, 1, 1, 1, 0, 1, 0);
              // Do not shift a and b
              // Set result to 0 and disable reg
              // Do not add result of adder to result
              // Clear counter to 0 and disable it
              // Ready to receive input and not ready to output value
            end
 006016     CALC: begin
              logic temp_add_mux;
 002208       if (b_lsb[0] == 1) temp_add_mux = 0;
 003808       else temp_add_mux = 1;
 006016       tab(0, 0, 0, 1, temp_add_mux, 0, 1, 0, 0);
              // Shift a and b
              // Do not clear counter and enable it
              // Enable result register on clock and do not pass in 0 from mux
              // Not ready to receive new input and output value not ready
              // If b_lsb is 1 - add result of adder to result
              // If b_lsb == 0 - do not add anything to result
            end
 000195     DONE: begin
 000195       tab(1, 1, 0, 0, 1, 1, 0, 1, 1);
              // Do not shift a and b
              // Keep result register output previous value before calculation done (not 0)
              // Keep result register updated with current result value
              // Clear counter and disable it
              // Ready to receive new input and output value is ready
            end
            default: begin
              // Same as IDLE state
              $stop;
              tab(1, 1, 1, 1, 1, 1, 0, 1, 0);
            end
          endcase
        end
        endmodule
        
        `endif /* LAB1_IMUL_INT_MUL_BASE_V */
        
