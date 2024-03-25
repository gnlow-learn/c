#include <stdio.h>

int main(void) {
    int a = 1;
    if (1) {
        int a = 2;
    }

    int b = 1;
    for (int i=0; i<1; i++) {
        int b = 2;
    }

    printf("%d %d", a, b);

    return 0;
}