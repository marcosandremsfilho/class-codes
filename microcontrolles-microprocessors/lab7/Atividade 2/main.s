	EXPORT __main
	AREA	EXAMPLE5_14, CODE, READONLY
__main	
	LDR	R1, =DATA1
	LDR	R2, =DATA2
	LDR	R3, =RESULT
	
	LDRSB R4, [R1]	; R4 = +96
	LDRSB R5, [R2]	; R5 = +70
	ADD	R4, R4, R5	; R4 = R4 + R5 = 96 + 70 = +166
	STR	R4, [R3]	; Store +166 in location RESULT
HL	B	HL

DATA1 	DCB 	+96
DATA2 	DCB 	+70
	ALIGN
	AREA	VARIABLES, DATA, READONLY 	; The following is stored in RAM
RESULT	DCW	0
	end
		
;a) O objetivo do programa é somar os valores de DATA1 e DATA2
;b) O programa não funciona corretamente pois há um estouro dos valores (overflow)
;C) É necessário trocar os LDRB para LDRSB
