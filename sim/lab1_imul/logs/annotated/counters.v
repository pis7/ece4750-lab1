//      // verilator_coverage annotation
        //=========================================================================
        // Verilog Components: Counter
        //=========================================================================
        
        `ifndef VC_COUNTER_V
        `define VC_COUNTER_V
        
        `include "vc/regs.v"
        
        module vc_BasicCounter
        #(
          parameter p_count_nbits       = 3,
          parameter p_count_clear_value = 0,
          parameter p_count_max_value   = 4
        )(
 003025   input  logic                     clk,
 000001   input  logic                     reset,
        
          // Operations
        
 000086   input  logic                     clear,
 000086   input  logic                     increment,
%000000   input  logic                     decrement,
        
          // Outputs
        
%000000   output logic [p_count_nbits-1:0] count,
 000086   output logic                     count_is_zero,
 000086   output logic                     count_is_max
        
        );
        
          //----------------------------------------------------------------------
          // State
          //----------------------------------------------------------------------
        
%000000   logic [p_count_nbits-1:0] count_next;
        
          vc_ResetReg#( p_count_nbits, p_count_clear_value ) count_reg
          (
            .clk   (clk),
            .reset (reset),
            .d     (count_next),
            .q     (count)
          );
        
          //----------------------------------------------------------------------
          // Combinational Logic
          //----------------------------------------------------------------------
        
 000086   logic do_increment;
          assign do_increment = ( increment && (count < p_count_max_value) );
        
%000000   logic do_decrement;
          assign do_decrement = ( decrement && (count > 0) );
        
          assign count_next
            = clear        ? (p_count_clear_value)
            : do_increment ? (count + 1)
            : do_decrement ? (count - 1)
            : count;
        
          assign count_is_zero = (count == 0);
          assign count_is_max  = (count == p_count_max_value);
        
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
          /*
          always_ff @( posedge clk ) begin
            if ( !reset ) begin
              `VC_ASSERT_NOT_X( increment );
              `VC_ASSERT_NOT_X( decrement );
            end
          end
          */
        
        endmodule
        
        `endif /* VC_COUNTER_V */
        
        
