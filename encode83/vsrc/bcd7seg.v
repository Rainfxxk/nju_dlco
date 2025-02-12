module bcd7seg (
  input [3:0] in,
  output [6:0] out
);
  wire in0, in1, in2, in3;
  wire out0, out1, out2, out3, out4, out5, out6, out7, out8, out9;
  assign in0 = in[0];
  assign in1 = in[1];
  assign in2 = in[2];
  assign in3 = in[3];

  assign out0 = ~in3 & ~in2 & ~in1 & ~in0;
  assign out1 = ~in3 & ~in2 & ~in1 & in0;
  assign out2 = ~in3 & ~in2 & in1 & ~in0;
  assign out3 = ~in3 & ~in2 & in1 & in0;
  assign out4 = ~in3 & in2 & ~in1 & ~in0;
  assign out5 = ~in3 & in2 & ~in1 & in0;
  assign out6 = ~in3 & in2 & in1 & ~in0;
  assign out7 = ~in3 & in2 & in1 & in0;
  assign out8 = in3 & ~in2 & ~in1 & ~in0;
  assign out9 = in3 & ~in2 & ~in1 & in0;

  assign out[0] = out1 | out4;
  assign out[1] = out5 | out6;
  assign out[2] = out2;
  assign out[3] = out1 | out4 | out7;
  assign out[4] = out1 | out3 | out4 | out5 | out7 | out9;
  assign out[5] = out1 | out2 | out3 | out7;
  assign out[6] = out0 | out1 | out7;


  /*
  assign out[0] = (~in3 & ~in2 & ~in1 & in0) |
                  (~in3 & in2 & ~in1 & ~in0);

  assign out[1] = (~in3 & in2 & ~in1 & in0) |
                  (~in3 & in2 & in1 & ~in0);

  assign out[2] = (~in3 & ~in2 & in1 & ~in0);

  assign out[3] = (~in3 & ~in2 & ~in1 & in0) |
                  (~in3 & in2 & ~in1 & ~in0) |
                  (~in3 & in2 & in1 & in0);

  assign out[4] = (~in3 & ~in2 & ~in1 & in0) |
                  (~in3 & ~in2 & in1 & in0) |
                  (~in3 & in2 & ~in1 & ~in0) |
                  (~in3 & in2 & ~in1 & in0) |
                  (~in3 & in2 & in1 & in0) |
                  (in3 & ~in2 & ~in1 & in0);

  assign out[5] = (~in3 & ~in2 & ~in1 & in0) |
                  (~in3 & ~in2 & in1 & ~in0) |
                  (~in3 & ~in2 & in1 & in0) |
                  (~in3 & in2 & in1 & in0);

  assign out[6] = (~in3 & ~in2 & ~in1 & ~in0) |
                  (~in3 & ~in2 & ~in1 & in0) |
                  (~in3 & in2 & in1 & in0);


  */



endmodule
