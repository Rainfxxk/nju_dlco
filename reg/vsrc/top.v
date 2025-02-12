module top(
  input clk,
  input wr_en,
  input [3:0] data_in,
  output [3:0] out
);

  reg [3:0] mem;

  assign out = mem;

  always @(posedge clk) begin
    if (wr_en) begin
      mem <= data_in;
    end
  end

endmodule
