module FIFO1(
input clk,
input reset,
input push,
input pop,
input [7:0] data_in,
output reg [7:0] data_out,
output wire full,
output wire empty
);
reg [7:0] fifo_data [0:3];
reg [2:0] count = 3'b0;
integer i=0;
always @(posedge clk or posedge reset) begin
if (reset) begin
count <= 3'b0;
end else if (push && count < 3) begin
fifo_data[count] <= data_in;
count <= count + 1;
end else if (pop && count > 0) begin
data_out <= fifo_data[0];
count <= count - 1;
for ( i = 0; i < 3; i = i + 1) begin
fifo_data[i] <= fifo_data[i + 1];
end
end
end
assign full = (count == 3);
assign empty = (count == 0);
endmodule