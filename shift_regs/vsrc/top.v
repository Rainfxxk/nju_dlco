module top(
  input clk,
  input [2:0] op,
  input [7:0] data_in,
  output [7:0] out
);

  reg [7:0] mem;

  assign out = mem;

  always @(posedge clk) begin
    case(op)
      3'b000: begin
      end
      3'b001: begin
        mem <= data_in;
      end
      3'b010: begin
        mem <= {1'b0, mem[7:1]};
      end
      3'b011: begin
        mem <= {mem[6:0], 1'b0};
      end
      3'b100: begin
        mem <= {mem[7], mem[7:1]};
      end
      3'b101: begin
        mem <= {data_in[0], mem[7:1]};
      end
      3'b110: begin
        mem <= {mem[0], mem[7:1]};
      end
      3'b111: begin
        mem <= {mem[6:0], mem[7]};
      end
    endcase
  end

endmodule
