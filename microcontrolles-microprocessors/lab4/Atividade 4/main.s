       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       LDR R1, =0x4FCA
	   LDR R2, =0xC237
	   
	   ORR R3, R1, R2
	   AND R4, R1, R2
	   EOR R5, R1, R2
	   
H      B    H          ;stay here forever
       END