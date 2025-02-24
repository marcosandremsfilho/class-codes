       EXPORT __main
       AREA dados, DATA, READWRITE
valor
	  SPACE 3
	   
	   AREA MY_PROG, CODE, READONLY
__main
       LDR R0, =valor
	   MOV R1, 0xFF
	   
	   MOV R3, #100
	   UDIV R2, R0, R3 ;Divide 255 por 100 sobra 2
	   STRB R2, [R0]
	   MUL R2, R2, R3  ; Multiplica o 2 com 100, resultado 200
	   MOV R4, R2 ; Armazena o valor 200
	   SUB R2, R1, R2 ; Sobra 55
	   
	   ADD R0, R0, #1
	   MOV R3, #10
	   UDIV R2, R2, R3
	   STRB R2, [R0]
	   MUL R2, R2, R3
	   ADD R2, R2, R4 ; Valor  250
	   SUB R2, R1, R2 ; valor 5
	   
	   ADD R0, R0, #1
	   STRB R2, [R0]
	      
       
H      B    H          ;stay here forever
       END