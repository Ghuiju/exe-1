#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("O maior número é: %.2f\n", (num1 > num2) ? num1 : num2);

    return 0;
}