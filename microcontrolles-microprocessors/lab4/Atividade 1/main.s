       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       LDR	R1, =0x33322292
	   LDR  R2, =0x55566623
	   LDR  R3, =0x9998884B
	   MOV 	R4, #0xFF
	   LDR  R5, =0xDDDEEE01
	   
	   MOV R6, #0
	   MOV R7, #0
	   
	   ADDS R6, R1
	   ADCS 	R7, #0
	   
	   ADDS R6, R2
	   ADCS 	R7, #0
	   
	   ADDS R6, R3
	   ADCS 	R7, #0
	   
	   ADDS R6, R4
	   ADCS 	R7, #0
	   
	   ADDS R6, R5 
	   ADC 	R7, #0
	   
       
H      B    H          ;stay here forever
       END