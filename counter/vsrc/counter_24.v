module counter_24 (
    input reset,
    input clk,
    output reg [3:0] l_out,
    output reg [3:0] h_out,
    output reg cout
);
    
    always @(posedge clk or negedge reset) begin
        if (reset) begin
            l_out <= l_out + 1;

            if (h_out >= 2 && l_out >= 3) begin
                h_out <= 0;
                l_out <= 0;
                cout <= 1;
            end
            else begin
                cout <= 0;
            end

            if (l_out >= 9) begin
                l_out <= 0;
                h_out <= h_out + 1;

            end

        end
        else begin
            l_out <= 0;
            h_out <= 0;
            cout <= 0;
        end

    end

endmodule
