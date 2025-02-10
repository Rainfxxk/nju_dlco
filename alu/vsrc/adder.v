module Adder #(parameter LEN)
(
  input [LEN - 1:0] A,
  input [LEN - 1:0] B,
  input cin,
  output [LEN - 1:0] out, 
  output cout
);

  assign {cout, out} = A + B + {31'b0, cin};

endmodule
