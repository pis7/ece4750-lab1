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
        
 000003 module top(  input logic clk, input logic linetrace );
        
          // DUT signals
 000003   logic        reset;
        
 000648   logic        istream_val;
 000648   logic        istream_rdy;
 000108   logic [63:0] istream_msg;
        
 000645   logic        ostream_rdy;
 000648   logic        ostream_val;
 000163   logic [31:0] ostream_msg;
        
          // Testbench signals
%000000   logic        istream_val_f;
%000000   logic        ostream_rdy_f;
        
 000108   logic [31:0] istream_msg_a;
 000120   logic [31:0] istream_msg_b;
        
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
 006140     while(1) begin
 006140       @(negedge clk);  
 000003       if (linetrace) begin
 006137            imul.display_trace;
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
        
        
          //--------------------------------------------------------------------
          // Personal Test Bench
          //--------------------------------------------------------------------
          // This is where Parker and George made our own Test Cases
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #1
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying Numbers with Low Order Bits Masked Off 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 000003     $display("P_Test #1 - Numbers with Low Order Bits Masked Off ");
            
 000003       test_task(7648, 7648);
 000003       test_task(7592, 3832);
              
 000003     #10;
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #2
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying Numbers with Middle Bits Masked Off
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 000003     $display("P_Test #2 - Numbers with Middle Bits Masked Off");
            
 000003       test_task(1927, 3087);
 000003       test_task(14087, 15903);
              
 000003     #10;
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #3
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying Sparse Numbers with Many Zeros and Few Ones
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 000003     $display("P_Test #3 - Sparse Numbers with Many Zeros and Few Ones");
            
 000003       test_task(4096, 2048);
 000003       test_task(10248, 5376);
              
 000003     #10;
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #4
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying Dense Numbers with Many Ones and Few Zeros
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 000003     $display("P_Test #4 - Dense Numbers with Many Ones and Few Zeros");
            
 000003       test_task(16375, 6911);
 000003       test_task(1983, 2047);
              
 000003     #10;
        
        
        
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
        
 000108     if(!ostream_val) @(ostream_val);// Wait for response
            
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
        
