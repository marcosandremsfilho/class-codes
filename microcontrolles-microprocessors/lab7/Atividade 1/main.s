	EXPORT __main
	AREA	NotExtendingExample, CODE, READONLY
__main
	LDR	 R0,=AA
	LDRSB R1,[R0]	;read AA

	LDR	 R0,=BB
	LDRSB R2,[R0]	;read BB
	
	SDIV R3,R1,R2
HERE B HERE

AA	DCB -25
BB	DCB	-2

	END
		
;a)O programa divide os valores negativos -25 com -2
;b) O programa passado nao está funcionando corretamente.
;c) para corrigir é necessário que os LDRB sejam sinalizados ou seja se tornem LDRSB
