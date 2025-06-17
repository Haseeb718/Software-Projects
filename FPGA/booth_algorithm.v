`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:22 10/17/2023 
// Design Name: 
// Module Name:    booth1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module booth1(
    input signed [3:0] m1,
    input signed [3:0] m2,
    output [7:0] res
    );
	
	reg signed [3:0] Q,M,A;
	reg [8:0] temp;
	integer i=0;
	reg Qn;
	
	always @(*) begin
		A=0;
		Qn=0;
		if (m1<m2)begin
			Q=m1;
			M=m1;
		end
		else begin
			M=m1;
			Q=m2;
		end
		for (i=0;i<4;i=i+1) begin
			
				case ({Q[0],Qn})
					
					2'b01: begin
					
					
					A=A+M;
					temp={A,Q,Qn};
					temp=temp>>1;
					Qn=temp[0];
					Q=temp[4:1];
					A={temp[7],temp[7:5]};
				end
				2'b10: begin
					A=A-M;
					temp={A,Q,Qn};
					temp=temp>>1;
					Qn=temp[0];
					Q=temp[4:1];
					A={temp[7],temp[7:5]};
				end
					2'b00: begin
					temp={A,Q,Qn};
					temp=temp>>1;
					Qn=temp[0];
					Q=temp[4:1];
					A={temp[7],temp[7:5]};
				end
				2'b11: begin
					temp={A,Q,Qn};
					temp=temp>>1;
					Qn=temp[0];
					Q=temp[4:1];
					A={temp[7],temp[7:5]};
				end
				endcase
		end
	end
	assign res={A,Q};

endmodule
