       EXPORT __main
       AREA MY_PROG, CODE, READONLY
__main
       LDR	R0, =0xFFFFFFFF
       BIC  R1, R0, #0x01
H      B    H          ;stay here forever
       END