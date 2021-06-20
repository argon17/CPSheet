* Some Clever Tricks : 

Set union :         A | B

Set intersection :  A & B

Set subtraction :   A & ~B

Set negation :      ALL_BITS ^ A or ~A

Set bit :           A |= 1 << bit

Clear bit :         A &= ~(1 << bit)

Test bit :          (A & 1 << bit) != 0

Extract last 1-bit :  A&-A or A&~(A-1) or x^(x&(x-1))

Remove last 1-bit :   A&(A-1)

Get all 1-bits :    ~0
