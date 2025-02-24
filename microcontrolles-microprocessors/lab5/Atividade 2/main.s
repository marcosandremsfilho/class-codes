       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       MOV	R0, #0x33 ;Armmazena o valor 33 em R0
	   MOV  R1, #0x32 ;Armazena o valor 32 em R1
	   AND  R2, R0, #0x0F ; Elimina os Bits mais significativos e armazena em R2
	   MOV  R2, R2, LSL #4 ;Desloca para a esquerda 4 bits
	   AND  R1, R1, #0x0F ;Elimina os mais sginificativos
	   ORR  R2, R2, R1 ;Faz lógica "ou" chegando ao resultado final
       
H      B    H          ;stay here forever
       END