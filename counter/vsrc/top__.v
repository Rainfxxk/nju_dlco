module top__ (
    input en,
    input clk,
    input reset,
    output [47:0] out
);

    wire divided_clk, divided_clk_n;
    reg [3:0] s_unit_digit_in;
    wire [3:0] s_unit_digit_out;
    wire s_unit_cout;
    wire [3:0] s_ten_digit_out;
    reg [3:0] s_ten_digit_in;
    wire s_ten_cout;
    reg [3:0] m_unit_digit_in;
    wire [3:0] m_unit_digit_out;
    wire m_unit_cout;
    reg [3:0] m_ten_digit_in;
    wire [3:0] m_ten_digit_out;
    wire m_ten_cout;
    wire [3:0] h_unit_digit_out;
    reg [3:0] h_unit_digit_in;
    wire h_unit_cout;
    reg [3:0] h_ten_digit_in;
    wire [3:0] h_ten_digit_out;

    divider #(26, 2500000) divider(.en(en), .in_clk(clk), .out_clk(divided_clk), .out_clk_n(divided_clk_n));

    counter #(4, 9) counter(.reset(reset), .clk(divided_clk), .out(s_unit_digit_in), .cout(s_unit_cout));


    assign s_unit_digit_out = s_ten_digit_in;
    //carrier #(9) s_unit_carrier(.clk(divided_clk), .cin(0), .in(s_unit_digit_in), .out(s_unit_digit_out), .cout());
    carrier #(5) s_ten_carrier(.clk(divided_clk), .cin(s_unit_cout), .in(s_ten_digit_in), .out(s_ten_digit_out), .cout(s_ten_cout));
    carrier #(9) m_unit_carrier(.clk(divided_clk), .cin(s_ten_cout), .in(m_unit_digit_in), .out(m_unit_digit_out), .cout(m_unit_cout));
    carrier #(5) m_ten_carrier(.clk(divided_clk), .cin(m_unit_cout), .in(m_ten_digit_in), .out(m_ten_digit_out), .cout(m_ten_cout));
    carrier #(9) h_unit_carrier(.clk(divided_clk), .cin(m_ten_cout), .in(h_unit_digit_in), .out(h_unit_digit_out), .cout(h_unit_cout));
    carrier #(2) h_ten_carrier(.clk(divided_clk), .cin(h_unit_cout), .in(h_ten_digit_in), .out(h_ten_digit_out), .cout());

    always @(posedge divided_clk or negedge reset) begin

        if (!reset) begin
            s_unit_digit_in <= 0;
            s_ten_digit_in <= 0;
            m_unit_digit_in <= 0;
            m_ten_digit_in <= 0;
            h_unit_digit_in <= 0;
            h_ten_digit_in <= 0;
        end

/*
        if (reset) begin
            if (s_unit_digit >= 9) begin
                s_ten_digit <= s_ten_digit + 1;

                if (s_ten_digit >= 5) begin
                    s_ten_digit <= 0;
                    m_unit_digit <= m_unit_digit + 1;

                    if (m_unit_digit >= 9) begin
                        m_unit_digit <= 0;
                        m_ten_digit <= m_ten_digit + 1;

                        if (m_ten_digit >= 5) begin
                            m_ten_digit <= 0;
                            h_unit_digit <= h_unit_digit + 1;
                            
                            if (h_unit_digit >= 9) begin
                                h_unit_digit <= 0;
                                h_ten_digit <= h_ten_digit + 1;

                                if (h_ten_digit >= 2 && h_unit_digit >= 4) begin
                                    h_unit_digit <= 0;
                                    h_ten_digit <= 0;
                                end
                            end
                        end
                    end
                end
            end
        end
        else begin
            s_unit_digit <= 0;
            s_ten_digit <= 0;
            m_unit_digit <= 0;
            m_ten_digit <= 0;
            h_unit_digit <= 0;
            h_ten_digit <= 0;
        end
*/
        
    end

    bcd7seg s_unit_seg(.in(s_unit_digit_out), .out(out[7:0]));
    bcd7seg s_ten_seg(.in({3'b0, s_unit_cout}), .out(out[15:8]));
    bcd7seg m_unit_seg(.in(m_unit_digit_out), .out(out[23:16]));
    bcd7seg m_ten_seg(.in(m_ten_digit_out), .out(out[31:24]));
    bcd7seg h_unit_seg(.in(h_unit_digit_out), .out(out[39:32]));
    bcd7seg h_ten_seg(.in(h_ten_digit_out), .out(out[47:40]));


endmodule
