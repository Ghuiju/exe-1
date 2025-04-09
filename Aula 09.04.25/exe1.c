#include <stdio.h>

void multi3(int *y) {
    *y = 3 * (*y);
}

int main(void) {
    int x = 5;
    printf("x antes: %d\n", x);
    multi3(&x);
    printf("Resultado: %d\n", x);
    printf("x depois: %d\n", x);
    return 0;
}