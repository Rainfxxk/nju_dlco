module top(
  input clk,
  output [13:0] out,
  output [7:0] dmem
);

  wire l_bit;
  reg [7:0] mem;

  assign l_bit = (mem[4] ^ mem[3]) ^ (mem[2] ^ mem[0]);
  assign dmem = mem;
  
  bcd7seg bcd7seg_1(
    .in  	(mem[3:0]),
    .out 	(out[6:0]  )
  );
  
  bcd7seg bcd7seg_2(
    .in  	(mem[7:4]),
    .out 	(out[13:7])
  );
  
  
  always @(posedge clk) begin
    if (mem == 8'b00000000) begin
      mem <= 8'b00000001;
    end
    else begin
      mem <= {l_bit, mem[7:1]};
    end
  end


endmodule
