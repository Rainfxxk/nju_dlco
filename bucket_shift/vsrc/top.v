module top(
  input lr_en,
  input al_en,
  input [2:0] shamt,
  input [7:0] din,
  output reg [7:0] dout
);

  wire r_bit, l_bit;
  reg [7:0] din_1, din_2;
  assign r_bit = 0;
  assign l_bit = ( al_en == 1 ) ? din[7] : 0;

  always @(*) begin
    if (shamt[0]) begin
      if (lr_en) begin
        din_1 = {din[6:0], r_bit};
      end
      else begin
        din_1 = {l_bit, din[7:1]};
      end
    end
    else begin
      din_1 = din;
    end

    if (shamt[1]) begin
      if (lr_en) begin
        din_2 = {din_1[5:0], r_bit, r_bit};
      end
      else begin
        din_2 = {l_bit, l_bit, din_1[7:2]};
      end
    end
    else begin
      din_2 = din_1;
    end

    if (shamt[2]) begin
      if (lr_en) begin
        dout = {din_2[3:0], r_bit, r_bit, r_bit, r_bit};
      end
      else begin
        dout = {l_bit, l_bit, l_bit, l_bit, din[7:4]};
      end
    end
    else begin
      dout = din_2;
    end
  end

endmodule
