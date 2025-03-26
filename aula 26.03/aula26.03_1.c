#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

  
    if (numero < 1) {
        printf("Por favor, insira um número positivo.\n");
        return 1; 
    }


    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("A soma dos números ímpares de 1 até %d é: %d\n", numero, soma);

    return 0;
}