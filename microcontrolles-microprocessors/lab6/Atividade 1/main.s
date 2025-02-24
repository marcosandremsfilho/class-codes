	   AREA dados, data, READONLY
notas
		DCB 69, 87, 96, 45, 75
		
	   EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
	   MOV R0, #5 ;Contagem
	   MOV R1, #0 ;MAX
	   LDR R2, =notas

cpr    LDRB R3, [R2]
	   CMP R1, R3
	   BHS igr ;Se R1>R3 vai para ignora e nao armazena no valor R1
	   MOV R1, R3
	   
igr    ADD R2, #1 ;Passa para o proximo byte ou valor
	   SUBS R0, R0, #1  ;Subtrai 1 da contagem de repetição
	   BNE cpr ;Se o contador ainda não chegou ao fim a contagem continua
    
H      B    H          ;stay here forever
       END