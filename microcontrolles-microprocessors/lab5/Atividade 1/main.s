       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       MOV R0, #0x76 ;Armazena o valor 76 em R0
	   AND R1, R0, #0x0F ;zera a parte mais significativa
	   ORR R1, R1, #0x30 ;Adciona o 3 na parte mais significativa
	   MOV R2, R0, LSR #4 ;Desloca para a direita 4 bits
	   ORR R2, R2, #0x30  ; Adciona 3 na parte mais significativa 
       
H      B    H         
       END