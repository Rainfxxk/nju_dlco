module ALU #(parameter LEN = 32)
(
  input [LEN - 1:0] A,
  input [LEN - 1:0] B,
  input [2:0] op,
  output Carry,
  output Zero,
  output Overflow,
  output [LEN - 1:0] Result
);

  wire cin, cout;
  wire [LEN - 1, 0] in_A, in_B, out;

  // when A-B or compare A & B, do A sub B
  assign cin = (~op[2] & ~op[1] & op[0]) | (op[2] & op[1] & ~op[0]);
  assign in_A = A,
  assign in_B = {LEN{cin}} ^ B
  Adder adder(LEN)(.A(A), .B(B), .cin(cin), .out(out), .cout(cout));

  assign Carry = cout ^ cin;
  assign Zero = ~(|out);
  assign Overflow = ~(in_A[LEN - 1] ^ in_B[LEN - 1]) & (out[LEN - 1] ^ in_A[LEN - 1]);

  always @(*) begin
    case (op)
      3'b000: Result = out;
      3'b001: Result = out;
      3'b010: Result = ~A;
      3'b011: Result = A & B;
      3'b100: Result = A | B;
      3'b101: Result = A ^ B;
      3'b110: Result = {{LEN - 1{1'b0}}, out[LEN-1]};
      3'b111: Result = ~(|out);
  end

endmodule
