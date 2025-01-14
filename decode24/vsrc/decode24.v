module decode24 (
  input [1:0] x,
  input E,
  output [3:0] y
);

  wire [3:0] mid_y;

  assign mid_y[0] = ~x[0] & ~x[1];
  assign mid_y[1] = x[0] & ~x[1];
  assign mid_y[2] = ~x[0] & x[1];
  assign mid_y[3] = x[0] & x[1];

  assign y = E?mid_y:{4{1'b0}};

endmodule
