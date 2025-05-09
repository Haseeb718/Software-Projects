module mealy_ov(
in , //input
clk , //clock
reset , //reset
out //output
) ;
//port declaration
input in, clk, reset ;
output reg out ;
parameter S0 = 0 , S1 = 1 , S2 = 2 , S3 = 3 ;
reg [1:0] present_state,next_state ;
always @ (posedge clk or posedge reset)
begin
if(reset)
present_state <= S0 ;
else
present_state <= next_state ;
end
always@(present_state or in)
begin
case(present_state)
S0 : begin
next_state = in ? S1 : S0 ;
out = 0 ;
end
S1 : begin
next_state = in ? S2 : S0 ;
out = 0 ;
end
S2 : begin
next_state = in ? S2 : S3 ;
out = 0 ;
end
S3 : begin
next_state = in ? S1 : S0 ;
out = in ? 1 : 0 ;
end
default: next_state = S0 ;
endcase
end
endmodule