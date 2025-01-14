module mux41 (
    input x0,
    input x1,
    input x2,
    input x3,
    input [1:0] s,
    output y
);

    assign y = s[1]?(s[0]?x3:x2):(s[0]?x1:x0);

endmodule
