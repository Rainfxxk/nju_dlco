module top(
  input clk,
  input wr_en,
  input [3:0] addr,
  input [7:0] data_in,
  output [7:0] out
);

  reg [7:0] ram[15:0];

  initial begin
    $readmemh("/home/rain/proj/nju_dlco/regs/mem1.txt", ram, 0, 15);
  end

  assign out = ram[addr];

  always @(posedge clk) begin
    if (wr_en) begin
      ram[addr] <= data_in;
    end
  end

endmodule
