#include <stdio.h>

#define MAIN int main(void) {
#define NIAM return 0;}

#define FOR for
#define ROF }

#define RANGE(I, N) (int I = 0; I<N; I++) {
#define END }

#define IF
#define THEN ?
#define ELSE :

#define PRINT(X) printf(X);

MAIN
    FOR RANGE(i, 5)
        PRINT(
            IF i % 2
            THEN "odd\n"
            ELSE "even\n"
        )
    ROF
NIAM