//      // verilator_coverage annotation
        //========================================================================
        // tb_IntMul
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
        
 000264   logic        istream_val;
 000264   logic        istream_rdy;
 000006   logic [63:0] istream_msg;
        
 000243   logic        ostream_rdy;
 000264   logic        ostream_val;
 000012   logic [31:0] ostream_msg;
        
          // Testbench signals
%000000   logic        istream_val_f;
%000000   logic        ostream_rdy_f;
        
 000006   logic [31:0] istream_msg_a;
 000012   logic [31:0] istream_msg_b;
        
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
 002115     while(1) begin
 002115       @(negedge clk);  
 002115       if (linetrace) begin
%000000            imul.display_trace;
              end
            end 
            $stop;
           end
        
          //----------------------------------------------------------------------
          // Run the Test Bench
          //----------------------------------------------------------------------
        
          initial begin
        
            $display("Start of Testbench");
            // Send reset and init values of all signals
            reset         = 1;
            istream_msg_a = 0;
            istream_msg_b = 0;
            istream_val   = 0;
        
            // After a moment, de-assert reset
            #10 
            reset = 0;
        
            //--------------------------------------------------------------------
            // Test cases
            //--------------------------------------------------------------------
        
            // Align test bench with negedge so that it looks better
            #10
            @(negedge clk); 
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #1
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #1");
        
            //Set inputs
            istream_msg_a = 32'd2;
            istream_msg_b = 32'd3;
            istream_val   =  1'b1;
            ostream_rdy   =  1'b1;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
 000001     if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 6 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #2
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #2");
            
            //Set inputs
            istream_msg_a = 32'd4;
            istream_msg_b = 32'd5;
            istream_val   =  1'b1;
            ostream_rdy   =  1'b1;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 20 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #3
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #3");
        
            //Set inputs
            istream_msg_a = 32'd3;
            istream_msg_b = 32'd4;
            istream_val   =  1'b1;
            ostream_rdy   =  1'b1;
            
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 12 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #4
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #4");
        
            //Set inputs
            istream_msg_a = 32'd10;
            istream_msg_b = 32'd13;
            istream_val   =  1'b1;
            ostream_rdy   =  1'b1;
            
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 130 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #5
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #5");
            
            // We can simplify Testbench with tasks (declared below)
            test_task(8,7);
        
            #10;
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Random Tests
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            $display("Random Test");
 000015     for( integer x = 0; x < 5; x++ ) begin
 000015       test_task( $random, $random );
            end
        
          //end
        
          //--------------------------------------------------------------------
          // Personal Test Bench
          //--------------------------------------------------------------------
          // This is where Parker and George made our own Test Cases
        
          
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #1
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying Zero and Zero
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("Start Personal Tests");
            $display("P_Test #1 - 0x0");
            
              test_task(0,0);
        
            #10;
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #2
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Hit each if statement in alt design
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #2 - Every if statement for alt shamt value");
            
 000096     for( integer x = 0; x < 32; x++ ) begin
 000096       test_task(1,2**x);
            end
        
            #10;
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #3
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Keep ostream_rdy deasserted until a few clock cycles later
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #3 - Test ostream_rdy control");
        
            //Set inputs
            istream_msg_a = 32'd2;
            istream_msg_b = 32'd3;
            istream_val   =  1'b1;
            ostream_rdy   =  1'b0;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
        
            #10
            ostream_rdy = 1'b1;
            
            // Check the result
            assert ( 6 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
            
            // $display("P_Test #1");
        
            //     //Set inputs
            //     istream_msg_a = 32'd2;
            //     istream_msg_b = 32'd3;
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (6 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #2
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying One and Zero
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #2");
        
            //     //Set inputs
            //     istream_msg_a = 32'd1;
            //     istream_msg_b = 32'd0;
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (0 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #3
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -1 and 0 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #3");
        
            //     //Set inputs
            //     istream_msg_a = 32'd4294967295; //-1 in decimal
            //     istream_msg_b = 32'd0;
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (0 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
          
            //  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #4
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -1 and 1 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #4");
        
            //     //Set inputs
            //     istream_msg_a = 32'd4294967295; //-1 in decimal
            //     istream_msg_b = 32'd1;
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (-1 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #5
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -1 and -1 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #5");
        
            //     //Set inputs
            //     istream_msg_a = 32'd4294967295; //-1 in decimal
            //     istream_msg_b = 32'd4294967295; //-1 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (1 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #6
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -3 and 3 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #6");
        
            //     //Set inputs
            //     istream_msg_a = 32'd4294967293; //-3 in decimal
            //     istream_msg_b = 32'd3; //3 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (-9 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #7
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying 4 and -3 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #7");
        
            //     //Set inputs
            //     istream_msg_a =  32'd4 //4 in decimal
            //     istream_msg_b =  32'd4294967293; //-3 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (-12 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #8
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying 4 and -3 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #8");
        
            //     //Set inputs
            //     istream_msg_a =  32'd10 //10 in decimal
            //     istream_msg_b =  32'd4294967293; //-3 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (- == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #9
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -3 and -3 
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #9");
        
            //     //Set inputs
            //     istream_msg_a =  32'd4294967293; //-3 in decimal
            //     istream_msg_b =  32'd4294967293; //-3 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (9 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #10
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -5 and -1
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #10");
        
            //     //Set inputs
            //     istream_msg_a =  32'd4294967291; //-5 in decimal
            //     istream_msg_b =  32'd4294967295; //-1 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (5 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
        
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // P_Test #11
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // // Multiplying -5 and -1
            // //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // $display("P_Test #11");
        
            //     //Set inputs
            //     istream_msg_a =  32'd4294967291; //-5 in decimal
            //     istream_msg_b =  32'd4294967295; //-1 in decimal
            //     istream_val   =  1'b1;
            //     ostream_rdy   =  1'b1;
        
            //     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            //     @(negedge clk); // Move to next cycle.
                
            //     istream_val = 1'b0; // Deassert ready input
            //     if(!ostream_val) @(ostream_val);// Wait for response
            //     @(negedge clk); // read at low clk
                
            //     // Check the result
            //     assert (5 == ostream_msg) begin
            //       pass(); // Book keeping
            //       $display( "OK: in0 = %d, in1 = %d, out = %d", 
            //                 istream_msg_a, istream_msg_b, ostream_msg );
            //     end
            //     else begin
            //       fail(); // Book keeping
            //       $error( "Failed: in0 = %d, in1 = %d, out = %d", 
            //               istream_msg_a, istream_msg_b, ostream_msg );
            //     end
              
            //     #10
            //     @(negedge clk);
        
        
            //start
            /*
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #12
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying 2^16 and 2^17
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #12");
        
                //Set inputs
                istream_msg_a =  32'd8192; //8192 in decimal
                istream_msg_b =  32'd8192; //8192 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (67108864 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #13
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying 2^16 and 2^16
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #13");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #14
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying 2^16 and -2^17
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #14");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #15
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying 2^16 and -2^16
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #15");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #16
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying -2^16 and 2^17
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #16");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #17
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying -2^16 and 2^16
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #17");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #18
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying -2^16 and -2^16
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #14");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #19
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Multiplying -2^16 and -2^17
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #19");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #20
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Low Order Bits Masked Off #1:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #20");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #21
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Low Order Bits Masked Off #2:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #21");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #22
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Middle Bits Masked Off #1:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #14");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #23
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Low Order Bits Masked Off #2:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #14");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #24
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Sparse Numbers With Zeros #1:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #24");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #25
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Sparse Numbers With Zeros #2:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #25");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #26
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Dense Numbers With Ones but Few Zeros #1:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #26");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #27
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Dense Numbers With Ones but Few Zeros #2:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #27");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #28
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Specific Designed Corner Case #1:
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #28");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // P_Test #29
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Specific Designed Corner Cases #2: 
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            $display("P_Test #29");
        
                //Set inputs
                istream_msg_a =  32'd16384; //2^14 in decimal
                istream_msg_b =  32'd8192; //2^13 in decimal
                istream_val   =  1'b1;
                ostream_rdy   =  1'b1;
        
                while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
                @(negedge clk); // Move to next cycle.
                
                istream_val = 1'b0; // Deassert ready input
                if(!ostream_val) @(ostream_val);// Wait for response
                @(negedge clk); // read at low clk
                
                // Check the result
                assert (134217728 == ostream_msg) begin
                  pass(); // Book keeping
                  $display( "OK: in0 = %d, in1 = %d, out = %d", 
                            istream_msg_a, istream_msg_b, ostream_msg );
                end
                else begin
                  fail(); // Book keeping
                  $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                          istream_msg_a, istream_msg_b, ostream_msg );
                end
              
                #10
                @(negedge clk);
        */
        // Finish the testbench
            
            @(negedge clk);
            $display("Testbench finished at %d cycles", ($time()-10)/2 );
            
            // Delay for a better waveform
            #10;
            $finish;
          end
        
          //--------------------------------------------------------------------
          // test_task definition
          //--------------------------------------------------------------------
          // Here is a tasks that test the DUT when given 2 numbers a and b 
          //
          // Notice that the functionality is identical to the examples above
        
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
        
 000039     if(!ostream_val) @(ostream_val);// Wait for response
            
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
        
