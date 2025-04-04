timescale 1ns / 1ps
module Barrel_shift(
input [7:0] in,
input clk,
input [3:0] sel,
output reg nclk,
output reg [7:0] out
);
reg [1:0]count=2'd0;
always @ (posedge clk) begin
count = count + 1;
nclk=count[1];
end
always @ (posedge nclk)begin
case(sel)
4'd0:out=in;
4'd1:out={{in[7]},{in[7:1]}};
4'd2:out={{2{in[7]}},{in[7:2]}};
4'd3:out={{3{in[7]}},{in[7:3]}};
4'd4:out={{4{in[7]}},{in[7:4]}};
4'd5:out={{5{in[7]}},{in[7:5]}};
4'd6:out={{6{in[7]}},{in[7:6]}};
4'd7:out={8{in[7]}};
4'd8:out={{1'b0},{in[7:1]}};
4'd9:out={{2{1'b0}},{in[7:2]}};
4'd10:out={{3{1'b0}},{in[7:3]}};
4'd11:out={{4{1'b0}},{in[7:4]}};
4'd12:out={{5{1'b0}},{in[7:5]}};
4'd13:out={{6{1'b0}},{in[7:6]}};
4'd14:out={{7{1'b0}},{in[7]}};
4'd15:out=0;
default : out=0;
endcase
end
endmodule