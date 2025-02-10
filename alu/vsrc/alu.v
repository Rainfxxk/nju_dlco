module ALU #(parameter LEN = 32)
(
  input [LEN - 1:0] A,
  input [LEN - 1:0] B,
  input [3:0] op,
  output Carry,
  output Zero,
  output Overflow,
  output reg [LEN - 1:0] Result
);

  wire cin, cout;
  wire [LEN - 1: 0] in_A, in_B, out;


  // when A-B or compare A & B, do A sub B
  assign cin = (~op[3] & ~op[2] & ~op[1] & op[0]) | (~op[3] & op[2] & op[1] & ~op[0]);
  assign in_A = A;
  assign in_B = {LEN{cin}} ^ B;
  Adder #(LEN) adder(.A(in_A), .B(in_B), .cin(cin), .out(out), .cout(cout));

  assign Carry = cout ^ cin;
  assign Zero = ~(|out);
  assign Overflow = ~(in_A[LEN - 1] ^ in_B[LEN - 1]) & (out[LEN - 1] ^ in_A[LEN - 1]);

  always @(*) begin
    case (op)
      4'b0000: Result = out;
      4'b0001: Result = out;
      4'b0010: Result = ~A;
      4'b0011: Result = A & B;
      4'b0100: Result = A | B;
      4'b0101: Result = A ^ B;
      4'b0110: Result = {{LEN - 1{1'b0}}, out[LEN-1]};
      4'b0111: Result = {31'b0, Zero};
      default: Result = 32'b0;
    endcase
  end

endmodule

