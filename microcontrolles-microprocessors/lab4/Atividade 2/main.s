       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       MOV	R1,#27 		;C = 0, Z = 0, R1 = 0x1B, R2 = 0x00, R3 = 0x00
       MOV	R2,#15 		;C = 0, Z = 0, R1 = 0x1B, R2 = 0x0F, R3 = 0x00
       SUBS	R3, R1, R2  ;C = 1, Z = 0, R1 = 0x1B, R2 = 0x0F, R3 = 0x0C
       MOV	R1,#20 		;C = 1, Z = 0, R1 = 0x14, R2 = 0x0F, R3 = 0x0C
       MOV	R2,#15 		;C = 1, Z = 0, R1 = 0x14, R2 = 0x0F, R3 = 0x0C
       SUBS	R3, R1, R2	;C = 1, Z = 0, R1 = 0x14, R2 = 0x0F, R3 = 0x05
       MOV	R1,#95		;C = 1, Z = 0, R1 = 0x5F, R2 = 0x0F, R3 = 0x0C
       MOV	R2,#95		;C = 1, Z = 0, R1 = 0x5F, R2 = 0x5F, R3 = 0x0C
       SUBS	R3, R1, R2  ;C = 1, Z = 1, R1 = 0x5F, R2 = 0x5F, R3 = 0x00
       MOV	R1,#50		;C = 1, Z = 1, R1 = 0x32, R2 = 0x00, R3 = 0x0C
       MOV	R2,#70		;C = 1, Z = 1, R1 = 0x32, R2 = 0x46, R3 = 0x0C
       SUBS	R3, R1, R2	;C = 0, Z = 0, R1 = 0x32, R2 = 0x46, R3 = 0xFFFFFFEC
H      B    H          ;stay here forever
       END