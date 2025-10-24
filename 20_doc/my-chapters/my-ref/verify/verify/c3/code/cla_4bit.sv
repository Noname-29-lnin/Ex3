module cla_4bit (
       input  logic [3:0]A,
		 input  logic [3:0]B,
		 input  logic      Cin,
		 output logic      Gblk,
		 output logic      Pblk,
		 output logic [3:0]S,
		 output logic      Cout
);
       logic [3:0]p,g ;
       logic c1, c2, c3;		 


       assign p    = A ^ B ;
		 assign g    = A & B ;
		 assign c1   = g[0] | (p[0] & Cin);
	    assign c2   = g[1] | (g[0] & p[1]) | (p[1] & p[0] & Cin);
       assign c3   = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (p[2] & p[1] & p[0] & Cin);
		 
		 logic   and4,or3;
		 assign  and4 = p[3] & p[2] & p[1] & p[0] ;
		 assign  or3  = (g[2] & p[3]) | (g[1] & p[3] & p[2]) | (g[0] & p[3] & p[2] & p[1]);
		 
       assign Cout = g[3] | or3 | (and4 & Cin) ;		 
		 assign S[0] = p[0] ^ Cin;
       assign S[1] = p[1] ^ c1;
		 assign S[2] = p[2] ^ c2;
		 assign S[3] = p[3] ^ c3;
		 
		 assign Gblk    =  g[3] | or3;
		 assign Pblk    =  and4;
		 
		 
endmodule		 