module carrier #(parameter MAX) (
    input clk,
    input cin,
    input [3:0] in,
    output reg [3:0] out,
    output reg cout
);

    wire [3:0] add_res;

    assign add_res = in + {3'b0, cin};

    always @(posedge clk) begin
        out <= add_res > MAX ? 0 : add_res;
        cout <= add_res > MAX ? 1 : 0; 
    end


endmodule
