module cla_4bit (
    input  logic [3:0]A,
	 input  logic [3:0]B,
	 input  logic cin,
	 output logic cout,Pblk,Gblk,
	 output logic [3:0]sum
);
   logic [3:0]g,p;
   assign  g = A & B;
	assign  p = A ^ B;
	
	logic  c1,c2,c3;
	assign c1   = g[0] | (p[0]&cin);
   assign c2   = g[1] | (g[0]&p[1]) | (p[1]&p[0]&cin);
   assign c3   = g[2] | (g[1]&p[2]) | (g[0]&p[2]&p[1]) | (p[2]&p[1]&p[0]&cin);
	assign cout = g[3] | (g[2]&p[3]) | (g[1]&p[3]&p[2]) | (g[0]&p[3]&p[2]&p[1]) | (p[3]&p[2]&p[1]&p[0]&cin); 
   
	assign sum[0] = p[0]^cin;
   assign sum[1] = p[1]^c1; 
   assign sum[2] = p[2]^c2;
   assign sum[3] = p[3]^c3;
	assign Pblk   = p[3]&p[2]&p[1]&p[0];
	assign Gblk   = g[3] | (g[2]&p[3]) | (g[1]&p[3]&p[2]) | (g[0]&p[3]&p[2]&p[1]); 
	
	endmodule
	