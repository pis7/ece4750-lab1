//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Registers
        //========================================================================
        
        // Note that we place the register output earlier in the port list since
        // this is one place we might actually want to use positional port
        // binding like this:
        //
        //  logic [p_nbits-1:0] result_B;
        //  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );
        
        `ifndef VC_REGS_V
        `define VC_REGS_V
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop
        //------------------------------------------------------------------------
        
        module vc_Reg
        #(
          parameter p_nbits = 1
        )(
 029236   input  logic               clk, // Clock input
 002656   output logic [p_nbits-1:0] q,   // Data output
 002656   input  logic [p_nbits-1:0] d    // Data input
        );
        
 014614   always_ff @( posedge clk )
 014614     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 009932   input  logic               clk,   // Clock input
 000002   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d      // Data input
        );
        
 004965   always_ff @( posedge clk )
 004965     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 014618   input  logic               clk,   // Clock input
 000004   input  logic               reset, // Sync reset input
 000112   output logic [p_nbits-1:0] q,     // Data output
 000112   input  logic [p_nbits-1:0] d,     // Data input
 000576   input  logic               en     // Enable input
        );
        
 007307   always_ff @( posedge clk )
 000298     if ( en )
 007009       q <= d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable and reset
        //------------------------------------------------------------------------
        
        module vc_EnResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
          input  logic               clk,   // Clock input
          input  logic               reset, // Sync reset input
          output logic [p_nbits-1:0] q,     // Data output
          input  logic [p_nbits-1:0] d,     // Data input
          input  logic               en     // Enable input
        );
        
          always_ff @( posedge clk )
            if ( reset || en )
              q <= reset ? p_reset_value : d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* VC_REGS_V */
        
        
