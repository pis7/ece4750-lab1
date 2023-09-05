//      // verilator_coverage annotation
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
 001054   input  logic        clk,
 000002   input  logic        reset,
        
 000106   input  logic        istream_val,
 000106   output logic        istream_rdy,
 000003   input  logic [63:0] istream_msg,
        
 000106   output logic        ostream_val,
 000092   input  logic        ostream_rdy,
 000006   output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
 000106   logic b_mux_sel;
 000106   logic a_mux_sel;
 000106   logic result_mux_sel;
 000106   logic result_en;
 000104   logic add_mux_sel;
 000019   logic [31:0] b_lsb;
 000032   logic [4:0] shamt;
          mul_base_datapath datapath(.clk(clk), .reset(reset), .req_msg(istream_msg), .resp_msg(ostream_msg), .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel),
          .result_en(result_en), .add_mux_sel(add_mux_sel), .shamt(shamt), .b_lsb(b_lsb));
          mul_base_control control(.clk(clk), .reset(reset), .req_val(istream_val), .req_rdy(istream_rdy), .resp_rdy(ostream_rdy), .resp_val(ostream_val),
          .b_mux_sel(b_mux_sel), .a_mux_sel(a_mux_sel), .result_mux_sel(result_mux_sel), .result_en(result_en), .add_mux_sel(add_mux_sel), .shamt(shamt), .b_lsb(b_lsb));
        
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
 001054   input logic clk,
 000002   input logic reset,
        
          // Data
 000003   input logic [63:0] req_msg,
 000006   output logic [31:0] resp_msg,
        
          // Ctrl signals
 000106   input logic b_mux_sel,
 000106   input logic a_mux_sel,
 000106   input logic result_mux_sel,
 000106   input logic result_en,
 000104   input logic add_mux_sel,
 000032   input logic[4:0] shamt,
 000019   output logic [31:0] b_lsb
        );
        
 000003 logic [31:0] a;
 000005 logic [31:0] b;
        
        assign a = req_msg[63:32];
        assign b = req_msg[31:0];
        
        // B logic ---------------------------------
        // B mux
 000019 logic [31:0] b_mux_out;
        vc_Mux2 #(.p_nbits(32)) b_mux(.in0(r_shift_out), .in1(b), .sel(b_mux_sel), .out(b_mux_out));
        
        // B register
 000019 logic [31:0] b_reg_out;
        vc_Reg #(.p_nbits(32)) b_reg(.clk(clk), .q(b_reg_out), .d(b_mux_out));
        assign b_lsb = b_reg_out;
        
        // B right shifter
 000013 logic [31:0] r_shift_out;
        vc_RightLogicalShifter #(.p_nbits(32), .p_shamt_nbits(5))  b_r_shifter(.in(b_reg_out), .shamt(shamt), .out(r_shift_out));
        
        // A logic ---------------------------------
        // A mux
 000031 logic [31:0] a_mux_out;
        vc_Mux2 #(.p_nbits(32)) a_mux(.in0(l_shift_out), .in1(a), .sel(a_mux_sel), .out(a_mux_out));
        
        // A register
 000031 logic [31:0] a_reg_out;
        vc_Reg #(.p_nbits(32)) a_reg(.clk(clk), .q(a_reg_out), .d(a_mux_out));
        
        // A left shifter
 000023 logic [31:0] l_shift_out;
        vc_LeftLogicalShifter #(.p_nbits(32), .p_shamt_nbits(5))  a_l_shifter(.in(a_reg_out), .shamt(shamt), .out(l_shift_out));
        
        // Result logic ----------------------------
        // Result mux
 000006 logic [31:0] result_mux_out;
        vc_Mux2 #(.p_nbits(32)) result_mux(.in0(add_mux_out), .in1(0), .sel(result_mux_sel), .out(result_mux_out));
        
        // Result register
 000006 logic [31:0] result_reg_out;
        vc_EnReg #(.p_nbits(32)) result_reg(.clk(clk), .reset(reset), .q(result_reg_out), .d(result_mux_out), .en(result_en));
        
        // Adder
 000031 logic [31:0] adder_out;
        vc_SimpleAdder #(.p_nbits(32)) result_adder(.in0(a_reg_out), .in1(result_reg_out), .out(adder_out));
        
        // Adder mux
 000006 logic [31:0] add_mux_out;
        vc_Mux2 #(.p_nbits(32)) adder_mux(.in0(adder_out), .in1(result_reg_out), .sel(add_mux_sel), .out(add_mux_out));
        
        assign resp_msg = result_reg_out;
        
        endmodule
        
        module mul_base_control (
 001054   input logic clk,
 000002   input logic reset,
        
          // Datapath I/O
 000019   input logic [31:0] b_lsb,
 000106   output logic b_mux_sel,
 000106   output logic a_mux_sel,
 000106   output logic result_en,
 000106   output logic result_mux_sel,
 000104   output logic add_mux_sel,
 000032   output logic [4:0] shamt,
        
          // Parent module I/O
 000106   input logic req_val,
 000106   output logic req_rdy,
 000092   input logic resp_rdy,
 000106   output logic resp_val
        );
        
        localparam[1:0]  IDLE = 2'b00, CALC = 2'b01, DONE = 2'b10;
 000106 logic [1:0] state;
 000106 logic [1:0] nextState;
 000106 logic done;
        
 000349 function void tab
 000177 (
        input logic t_a_mux_sel,
 000003 input logic t_b_mux_sel,
        input logic [4:0] t_shamt,
        input logic t_result_mux_sel,
 000174 input logic t_result_en,
        input logic t_add_mux_sel,
        input logic t_req_rdy,
        input logic t_resp_val,
%000000 input logic t_done
%000000 );
 000050 begin
 000349   assign a_mux_sel = t_a_mux_sel;
 000020   assign b_mux_sel = t_b_mux_sel;
 000154   assign shamt = t_shamt;
 000349   assign result_mux_sel = t_result_mux_sel;
 000117   assign result_en = t_result_en;
 000349   assign add_mux_sel = t_add_mux_sel;
 000010   assign req_rdy = t_req_rdy;
 000107   assign resp_val = t_resp_val;
 000349   assign done = t_done;
 000010 end
        endfunction
%000000 
%000000 // State register
 000349 always_ff @(posedge clk) begin
%000000   // reset state to idle if reset signal high
 000003   if (reset) state <= IDLE;
        
          // clock in nextState to state on posedge clock
 000346   else state <= nextState;
%000000 end
%000000 
 000050 // Next state logic
%000000 always_comb begin
%000000   case (state)
 000050     IDLE: begin
 000050       // If input value ready then go to CALC state
 000086       if (req_val) nextState = CALC;
 000283       else nextState = IDLE;
 000050     end
 000050     CALC: begin
              // If counter is done then go to DONE state
 000043       if (done) nextState = DONE;
 000050       else nextState = CALC;
            end
 000043     DONE: begin
 000050       // If output device ready to receive value then go back to IDLE state
%000000       if (resp_rdy) nextState = IDLE;
%000000       else nextState = DONE;
 000050     end
            default: begin
 000117       $stop;
              nextState = IDLE;
 000117     end
 000117   endcase
        end
        
 000117 // Output logic
%000000 always_comb begin
%000000   case(state)
 000093     IDLE: begin
 000093       tab(1, 1, 0, 1, 1, 1, 1, 0, 0);
 000117       // Do not shift a and b
            //   b_mux_sel = 1;
 000015     //   a_mux_sel = 1;
 000015     //   shamt = 0;
 000005 
 000005     //   // Set result to 0 and disable reg
            //   result_mux_sel = 1;
 000102     //   result_en = 1;
 000102 
 000102     //   // Do not add result of adder to result
            //   add_mux_sel = 1;
 000057 
 000024     //   // Ready to receive input and not ready to output value
 000012     //   req_rdy = 1;
 000001     //   resp_val = 0;
 000001 
 000001     //   done = 0;
 000001     end
 000213     CALC: begin
%000000       logic [4:0] temp_shamt;
%000000       logic temp_done;
%000000       logic temp_add_mux_sel;
 000058       if (b_lsb[1]) temp_shamt = 1;
 000025       else if (b_lsb[2]) temp_shamt = 2;
 000013       else if (b_lsb[3]) temp_shamt = 3;
 000002       else if (b_lsb[4]) temp_shamt = 4;
 000002       else if (b_lsb[5]) temp_shamt = 5;
 000002       else if (b_lsb[6]) temp_shamt = 6;
 000002       else if (b_lsb[7]) temp_shamt = 7;
 000001       else if (b_lsb[8]) temp_shamt = 8;
 000001       else if (b_lsb[9]) temp_shamt = 9;
 000001       else if (b_lsb[10]) temp_shamt = 10;
 000001       else if (b_lsb[11]) temp_shamt = 11;
 000001       else if (b_lsb[12]) temp_shamt = 12;
 000001       else if (b_lsb[13]) temp_shamt = 13;
 000001       else if (b_lsb[14]) temp_shamt = 14;
 000001       else if (b_lsb[15]) temp_shamt = 15;
 000001       else if (b_lsb[16]) temp_shamt = 16;
 000001       else if (b_lsb[17]) temp_shamt = 17;
 000001       else if (b_lsb[18]) temp_shamt = 18;
 000001       else if (b_lsb[19]) temp_shamt = 19;
 000020       else if (b_lsb[20]) temp_shamt = 20;
 000001       else if (b_lsb[21]) temp_shamt = 21;
 000001       else if (b_lsb[22]) temp_shamt = 22;
 000001       else if (b_lsb[23]) temp_shamt = 23;
 000001       else if (b_lsb[24]) temp_shamt = 24;
 000001       else if (b_lsb[25]) temp_shamt = 25;
 000001       else if (b_lsb[26]) temp_shamt = 26;
 000001       else if (b_lsb[27]) temp_shamt = 27;
 000001       else if (b_lsb[28]) temp_shamt = 28;
 000001       else if (b_lsb[29]) temp_shamt = 29;
 000001       else if (b_lsb[30]) temp_shamt = 30;
 000001       else if (b_lsb[31]) temp_shamt = 31;
 000085       else temp_shamt = 1;
        
 000010       if (b_lsb[0] == 0) begin
 000079         temp_add_mux_sel = 1;
 000036         if (b_lsb == 32'b0) temp_done = 1;
 000010         else temp_done = 0;
 000010       end
 000134       else begin
 000010         temp_add_mux_sel = 0;
 000134         temp_done = 0;
%000000       end
 000213       tab(0, 0, temp_shamt, 0, 1, temp_add_mux_sel, 0, 0, temp_done);
%000000       // // Shift a and b
%000000       // b_mux_sel = 0;
%000000       // a_mux_sel = 0;
%000000 
%000000       // // Enable result register on clock and do not pass in 0 from mux
%000000       // result_en = 1;
%000000       // result_mux_sel = 0;
%000000 
%000000       // // Not ready to receive new input and output value not ready
              // req_rdy = 0;
              // resp_val = 0;
            end
 000043     DONE: begin
 000043       tab(1, 1, 0, 0, 0, 1, 1, 1, 0);
              // Do not shift a and b
              // b_mux_sel = 1;
              // a_mux_sel = 1;
              // shamt = 0;
        
              // // Keep result register output previous value before calculation done (not 0)
              // result_mux_sel = 0;
              // result_en = 0;
        
              // // keep result register updated with current result value
              // add_mux_sel = 1;
        
              // // Ready to receive new input and output value is ready
              // req_rdy = 1;
              // resp_val = 1;
        
              // done = 0;
            end
            default: begin
              $stop;
              tab(1, 1, 0, 1, 0, 1, 1, 0, 0);
              // Same as IDLE state
              // b_mux_sel = 1;
              // a_mux_sel = 1;
              // shamt = 0;
              // result_mux_sel = 1;
              // result_en = 0;
              // add_mux_sel = 1;
              // req_rdy = 1;
              // resp_val = 0;
              // done = 0;
            end
          endcase
        end
        
        endmodule
        
        `endif /* LAB1_IMUL_INT_MUL_ALT_V */
        
