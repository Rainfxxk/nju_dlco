module top (
    input clk,
    input en,
    input reset,
    output [47:0] out
);
    wire divided_clk;

    reg [3:0] s_unit_digit;
    wire s_unit_cout;
    wire [3:0] s_ten_digit;
    wire s_ten_cout;
    reg [3:0] m_unit_digit;
    wire m_unit_cout;
    reg [3:0] m_ten_digit;
    wire m_ten_cout;
    reg [3:0] h_unit_digit;
    wire h_unit_cout;
    reg [3:0] h_ten_digit;
    wire h_ten_cout;

    divider #(26, 500) divider(.en(en), .in_clk(clk), .out_clk(divided_clk), .out_clk_n());
    counter #(4, 9) s_unit_counter(.reset(reset), .clk(divided_clk), .out(s_unit_digit), .cout(s_unit_cout));
    counter #(4, 5) s_ten_counter(.reset(reset), .clk(s_unit_cout), .out(s_ten_digit), .cout(s_ten_cout));
    counter #(4, 9) m_unit_counter(.reset(reset), .clk(s_ten_cout), .out(m_unit_digit), .cout(m_unit_cout));
    counter #(4, 5) m_ten_counter(.reset(reset), .clk(m_unit_cout), .out(m_ten_digit), .cout(m_ten_cout));
    counter_24 counter_24(.reset(reset), .clk(m_ten_cout), .l_out(h_unit_digit), .h_out(h_ten_digit), .cout(h_ten_cout));

    bcd7seg s_unit_seg(.in(s_unit_digit), .out(out[7:0]));
    bcd7seg s_ten_seg(.in(s_ten_digit), .out(out[15:8]));
    bcd7seg m_unit_seg(.in(m_unit_digit), .out(out[23:16]));
    bcd7seg m_ten_seg(.in(m_ten_digit), .out(out[31:24]));
    bcd7seg h_unit_seg(.in(h_unit_digit), .out(out[39:32]));
    bcd7seg h_ten_seg(.in(h_ten_digit), .out(out[47:40]));

endmodule
