//      // verilator_coverage annotation
        //========================================================================
        // Line Tracing
        //========================================================================
        
        `ifndef VC_TRACE_V
        `define VC_TRACE_V
        import "DPI-C" function void pass() ;
        import "DPI-C" function void fail() ;
        
        // NOTE: This macro is declared outside of the module to allow some vc
        // modules to see it and use it in their own params. Verilog does not
        // allow other modules to hierarchically reference the nbits localparam
        // inside this module in constant expressions (e.g., localparams).
        
        `define VC_TRACE_NCHARS 512
        `define VC_TRACE_NBITS  512*8
        
        module vc_Trace
        (
 020590   input logic clk,
 000006   input logic reset
        );
        
          integer len0;
          integer len1;
          integer idx0;
          integer idx1;
        
          // NOTE: If you change these, then you also need to change the
          // hard-coded constant in the declaration of the trace function at the
          // bottom of this file.
          // NOTE: You would also need to change the VC_TRACE_NBITS and
          // VC_TRACE_NCHARS macro at the top of this file.
        
          localparam nchars = 512;
          localparam nbits  = 512*8;
        
          // This is the actual trace storage used when displaying a trace
        
          logic [nbits-1:0] storage;
        
          // Meant to be accesible from outside module
        
%000000   integer cycles_next = 0;
%000000   integer cycles      = 0;
        
          // Get trace level from command line
        
%000000   logic [3:0] level;
        
        `ifndef VERILATOR
          initial begin
            storage = '0;
            storage[31:0] = 511; 
            $display("Strating Trace");
            if ( !$value$plusargs( "trace=%d", level ) ) begin
              level = 0;
        
            end
          end
        `else
%000000   initial begin
%000000       storage = '0;
%000000       storage[31:0] = 511; 
%000000     level = 1;
          end
        `endif // !`ifndef VERILATOR
        
          // Track cycle count
        
 010292   always_ff @( posedge clk ) begin
 010292     cycles <= ( reset ) ? 0 : cycles_next;
          end
        
          //----------------------------------------------------------------------
          // append_str
          //----------------------------------------------------------------------
          // Appends a string to the trace.
        
 034586   task append_str
          (
            inout logic [nbits-1:0] trace,
            input logic [nbits-1:0] str
          );
 034586   begin
 034586     trace=trace;
        
 034586     len0 = 1;
 012700     while ( str[len0*8+:8] != 0 ) begin
 012700       len0 = len0 + 1;
            end
        
 034586     idx0 = trace[31:0];
        
 034586     for ( idx1 = len0-1; idx1 >= 0; idx1 = idx1 - 1 )
 047286     begin
 047286       trace[ idx0*8 +: 8 ] = str[ idx1*8 +: 8 ];
              //$display("Storing %d at %d",str[ idx1*8 +: 8 ],idx0);
 047286       $write("%c",str[ idx1*8 +: 8 ]);
 047286       idx0 = idx0 - 1;
            end
        
 034586     trace[31:0] = idx0;
        
          end
          endtask
        
          //----------------------------------------------------------------------
          // append_str_ljust
          //----------------------------------------------------------------------
          // Appends a left-justified string to the trace.
        
%000000   task append_str_ljust
          (
            inout logic [nbits-1:0] trace,
            input logic [nbits-1:0] str
          );
%000000   begin
        
%000000     idx0 = trace[31:0];
%000000     idx1 = nchars;
        
%000000     while ( str[ idx1*8-1 -: 8 ] != 0 ) begin
%000000       trace[ idx0*8 +: 8 ] = str[ idx1*8-1 -: 8 ];
%000000       idx0 = idx0 - 1;
%000000       idx1 = idx1 - 1;
            end
        
%000000     trace[31:0] = idx0;
        
          end
          endtask
        
          //----------------------------------------------------------------------
          // append_chars
          //----------------------------------------------------------------------
          // Appends the given number of characters to the trace.
        
 020202   task append_chars
          (
            inout logic   [nbits-1:0] trace,
            input logic         [7:0] char,
            input integer             num
          );
 020202   begin
 020202     trace=trace;
 020202     idx0 = trace[31:0];
        
 020202     for ( idx1 = 0;
 234606           idx1 < num;
 234606           idx1 = idx1 + 1 )
 234606     begin
 234606       trace[idx0*8+:8] = char;
              //$display("Storing %d at %d",char,idx0);
 234606       $write("%c",char);
 234606       idx0 = idx0 - 1;
            end
        
 020202     trace[31:0] = idx0;
        
          end
          endtask
        
          //----------------------------------------------------------------------
          // append_val_str
          //----------------------------------------------------------------------
          // Append a string modified by val signal.
        
%000000   task append_val_str
          (
            inout logic [nbits-1:0] trace,
            input logic             val,
            input logic [nbits-1:0] str
          );
%000000   begin
        
%000000     len1 = 0;
%000000     while ( str[len1*8+:8] != 0 ) begin
%000000       len1 = len1 + 1;
            end
        
%000000     if ( val )
%000000       append_str( trace, str );
%000000     else if ( !val )
%000000       append_chars( trace, " ", len1 );
%000000     else begin
%000000       append_str( trace, "x" );
%000000       append_chars( trace, " ", len1-1 );
            end
        
          end
          endtask
        
          //----------------------------------------------------------------------
          // val_rdy_str
          //----------------------------------------------------------------------
          // Append a string modified by val/rdy signals.
        
 020584   task append_val_rdy_str
          (
            inout logic [nbits-1:0] trace,
            input logic             val,
            input logic             rdy,
            input logic [nbits-1:0] str
          );
 020584   begin
        
 020584     len1 = 0;
 247008     while ( str[len1*8+:8] != 0 ) begin
 247008       len1 = len1 + 1;
            end
        
 000382     if ( rdy && val ) begin
 000382       append_str( trace, str );
            end
 010872     else if ( rdy && !val ) begin
 010872       append_chars( trace, " ", len1 );
            end
 000770     else if ( !rdy && val ) begin
 000770       append_str( trace, "#" );
 000770       append_chars( trace, " ", len1-1 );
            end
%000000     else if ( !rdy && !val ) begin
 008560       append_str( trace, "." );
 008560       append_chars( trace, " ", len1-1 );
            end
%000000     else begin
%000000       append_str( trace, "x" );
%000000       append_chars( trace, " ", len1-1 );
            end
        
          end
          endtask
        
        endmodule
        
        //------------------------------------------------------------------------
        // VC_TRACE_NBITS_TO_NCHARS
        //------------------------------------------------------------------------
        // Macro to determine number of characters for a net
        
        `define VC_TRACE_NBITS_TO_NCHARS( nbits_ ) ((nbits_+3)/4)
        
        //------------------------------------------------------------------------
        // VC_TRACE_BEGIN
        //------------------------------------------------------------------------
        
        //`define VC_TRACE_BEGIN                                                  \
        //  export "DPI-C" task line_trace;                                       \
        //  vc_Trace vc_trace(clk,reset);                                         \
        //  task line_trace( inout bit [(512*8)-1:0] trace_str );
        
        `ifdef VERILATOR
        `define VC_TRACE_BEGIN                                        \
          /*verilator coverage_off*/          \
          integer idx1;                                                \
          integer idx0;                                                \
          vc_Trace vc_trace(clk,reset);                                         \
                                                                                \
          task display_trace;                                                   \
          begin                                                                 \
            /*vc_trace.storage = '0;*/                                                                    \
            vc_trace.storage[31:0] = 511;                                                                    \
                                                                                \
            if ( vc_trace.level > 0 ) begin                                     \
              \
               /*$display("getting trace");  */                                                               \
              $write( "%4d: ", vc_trace.cycles );                               \
              line_trace( vc_trace.storage );                                   \
                                                                                \
                                                                                \
              vc_trace.idx0 = vc_trace.storage[31:0];                           \
               idx0=vc_trace.idx0 ;                                      \
              \
              /*$display ("Output Trace %d to %d", idx0,vc_trace.nchars-1);    */                               \
              for ( idx1 = vc_trace.nchars-1;                          \
                    idx1 > idx0;                              \
                    idx1 = idx1- 1 )                         \
              begin                                                             \
                /*$write( "%d,%d",idx1, vc_trace.storage[vc_trace.idx1*8+:8] );           \
                $display("Retriving %d at %d",vc_trace.storage[vc_trace.idx1*8+:8] ,idx1); */                  \
              end                                                               \
              $write("\n");                                                     \
                                                                                \
            end                                                                 \
            vc_trace.cycles_next = vc_trace.cycles + 1;                         \
                                                                                \
          end                                                                   \
          endtask                                                               \
                                                                                \
          task line_trace( inout bit [(512*8)-1:0] trace_str );
        `else
        `define VC_TRACE_BEGIN                                                  \
          export "DPI-C" task line_trace;                                       \
          vc_Trace vc_trace(clk,reset);                                         \
          task line_trace( inout bit [(512*8)-1:0] trace_str );
        `endif
        
        //------------------------------------------------------------------------
        // VC_TRACE_END
        //------------------------------------------------------------------------
        
        `define VC_TRACE_END \
          /*verilator coverage_on*/ \
          endtask
        
        `endif /* VC_TRACE_V */
        
        
