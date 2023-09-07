//      // verilator_coverage annotation
        //========================================================================
        // ub_IntMul
        //========================================================================
        // A basic Verilog test bench for the multiplier
        
        `default_nettype none
        `timescale 1ps/1ps
        
        `ifndef DESIGN
          `define DESIGN IntMulBase
        `endif
        
        `include `"`DESIGN.v`"
        `include "vc/trace.v"
        
        //------------------------------------------------------------------------
        // Top-level module
        //------------------------------------------------------------------------
        
%000000 module top(  input logic clk, input logic linetrace );
        
          // DUT signals
 000003   logic        reset;
        
 000600   logic        istream_val;
 000600   logic        istream_rdy;
 000108   logic [63:0] istream_msg;
        
 000597   logic        ostream_rdy;
 000600   logic        ostream_val;
 000144   logic [31:0] ostream_msg;
        
          // Testbench signals
%000000   logic        istream_val_f;
%000000   logic        ostream_rdy_f;
        
 000108   logic [31:0] istream_msg_a;
 000117   logic [31:0] istream_msg_b;
        
          // Form istream_msg
%000000   always_comb begin
%000000     istream_msg[63:32] = istream_msg_a;
%000000     istream_msg[31: 0] = istream_msg_b;
          end
        
          //----------------------------------------------------------------------
          // Module instantiations
          //----------------------------------------------------------------------
          
          // Instantiate the multiplier
        
          lab1_imul_`DESIGN imul
          (
            .clk   (clk),
            .reset (reset),
            .istream_val(istream_val),
            .istream_rdy(istream_rdy),
            .istream_msg(istream_msg),
            .ostream_val   (ostream_val),
            .ostream_rdy   (ostream_rdy),
            .ostream_msg   (ostream_msg)
          );
        
          initial begin 
 005699     while(1) begin
 005699       @(negedge clk);  
 005699       if (linetrace) begin
%000000            imul.display_trace;
              end
            end 
            $stop;
           end
        
          //----------------------------------------------------------------------
          // Run the Test Bench
          //----------------------------------------------------------------------
        
 000003   initial begin
        
 000003     $display("Start of Testbench");
            // Send reset and init values of all signals
 000003     reset         = 1;
 000003     istream_msg_a = 0;
 000003     istream_msg_b = 0;
 000003     istream_val   = 0;
        
            // After a moment, de-assert reset
 000003     #10 
 000003     reset = 0;
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Random Micro-benchmark
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
 000003     $display("Random Test");
 000003     for( integer x = 0; x < 100; x++ ) begin
 000300       test_task( $random, $random );
            end
        
            // Finish the testbench
            
 000003     @(negedge clk);
 000003     $display("Testbench finished at %d cycles", ($time()-10)/2 );
            
            // Delay for a better waveform
 000003     #10;
 000003     $finish;
        
          end
        
          //--------------------------------------------------------------------
          // test_task definition
          //--------------------------------------------------------------------
          // Here is a tasks that test the DUT when given 2 numbers a and b 
          //
        
          task test_task( [31:0] a,  [31:0] b );
          begin
        
            // Change inputs at the negedge
            @(negedge clk);
        
            // Set inputs
            istream_msg_a = a;
            istream_msg_b = b;
            istream_val   = 1'b1;
            ostream_rdy   = 1'b0;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // No more ready input
            ostream_rdy = 1'b1; // Ready for output
        
 000100     if(!ostream_val) @(ostream_val);// Wait for response
            
            // Check the result
            assert ( (a * b) == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
            end
        
            @(negedge clk);
          end
          endtask
        endmodule
        
