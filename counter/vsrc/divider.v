module divider#(parameter WIDTH, parameter RATE)
(
    input en,
    input in_clk,
    output reg out_clk,
    output out_clk_n
);
    reg [WIDTH-1:0] counter;

    always @(posedge in_clk) begin
        if (en) begin
            counter <= counter + 1;
            if (counter == RATE) begin
                out_clk <= ~out_clk;
                counter <= 0;
            end
        end
        else begin
            out_clk <= 0;
            counter <= 0;
        end
    end

    assign out_clk_n = ~out_clk;

endmodule
