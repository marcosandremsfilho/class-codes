       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       LDR	R0, =0xFFFFFFFF
       MOV  R1, R0
	   
	   UMULL R2,R3, R0, R1 ;R2 parte baixa
						   ;R3 parte alta
H      B    H          ;stay here forever
       END