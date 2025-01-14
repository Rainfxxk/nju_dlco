module top(
  input [7:0] in,
  input en,
  output [6:0] out,
  output [2:0] encode_out
);

//wire [2:0] encode_out;

encode83 encode(.x(in), .en(en), .y(encode_out));
bcd7seg seg(.in({1'b0, encode_out}), .out(out));

endmodule
