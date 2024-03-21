#include <stdio.h>

int main(void) {
    int i = 10;
    float f = 10.5;
    printf("%f\n", i + f);

    printf("f as d: %d\n", (float) 10 / 3);
    printf("d as d: %d\n", 10 / 3);

    printf("f as f: %f\n", (float) 10 / 3);
    printf("d as f: %f\n", 10 / 3);
    return 0;
}
