ASSUME CS: CODE, DS: DATA
DATA SEGMENT
NUM1 DB 05H, 04H, 06H, 01H, 07H
NUM2 DW 0005H
DATA ENDS
CODE SEGMENT
START:
MOV AX, DATA
MOV DS, AX
MOV AH, 00H
MOV CX, NUM2
MOV BX, OFFSET NUM1
MOV AL,[BX]
L2: INC BX
CMP AL, [BX]
JB L1
XCHG AL, [BX]
L1: LOOP L2
INT 03H
CODE ENDS
END START