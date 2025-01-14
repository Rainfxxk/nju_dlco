module top(
  input [2:0] x,
  input E,
  output [7:0] y
);

  reg [7:0] mid_y;

  always @(*) begin
    case (x)
      0: mid_y = 8'b00000001;
      1: mid_y = 8'b00000010;
      2: mid_y = 8'b00000100;
      3: mid_y = 8'b00001000;
      4: mid_y = 8'b00010000;
      5: mid_y = 8'b00100000;
      6: mid_y = 8'b01000000;
      7: mid_y = 8'b10000000;
    endcase
  end


  assign y = E?mid_y:{8{1'b0}};

endmodule
