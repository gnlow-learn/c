#include <stdio.h>

#define main int main(void) {
#define niam return 0;}

#define for for
#define rof }

#define range(I, N) (int I = 0; I<N; I++) {
#define end }

#define if
#define then ?
#define else :

#define Q(X) #X

#define print(...) printf(__VA_ARGS__);

main
    for range(i, 5)
        print(
            if i % 2
            then "odd\n"
            else "even\n"
        )
    rof

    if 1 then printf("") else 2;
niam