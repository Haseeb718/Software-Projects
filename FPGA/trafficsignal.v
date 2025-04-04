module signal(
input clk,
input rst,
output reg [5:0] light
);
parameter s0=2'd0 , s1 = 2'd1 ,s2=2'd2 , s3 = 2'd3;
reg [23:0]q;
reg [5:0] count;
reg [1:0] state;
always@(posedge clk or posedge rst)begin
if(rst)
q<=0;
else
q<=q+1;
end
always @(posedge q[23] or posedge rst) begin
if(rst)begin
count<=0;
state<=s0;
end
else begin
case(state)
s0: begin
if(count<45)begin
state<=s0;
count<=count+1;
end
else begin
state<=s1;
count<=0;
end
end
s1: begin
if(count<3)begin
state<=s1;
count<=count+1;
end
else begin
state<=s2;
count<=0;
end
end
s2: begin
if(count<45)begin
state<=s2;
count<=count+1;
end
else begin
state<=s3;
count<=0;
end
end
s3: begin
if(count<3)begin
state<=s3;
count<=count+1;
end
else begin
state<=s0;
count<=0;
end
end
endcase
end
end
always @(state)begin
case (state)
s0:light=6'b100001;
s1:light=6'b010010;
s2:light=6'b001100;
s3:light=6'b010010;
endcase
end
endmodule