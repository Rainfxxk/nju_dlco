module counter#(parameter WIDTH, parameter MAX) (
    input reset,
    input clk,
    output reg [WIDTH-1:0] out,
    output reg cout
);
    
    always @(posedge clk or negedge reset) begin
        if (reset) begin
            out <= out + 1;

            if (out >= MAX) begin
                out <= 0;
                cout <= 1;
            end
            else begin
                cout <= 0;
            end

        end
        else begin
            out <= 0;
            cout <= 0;
        end

    end

endmodule
