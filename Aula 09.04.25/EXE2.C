#include <stdio.h>

int subtrai(int numero) {
    return numero - 3;
}

int main(void) {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("recebido: %d\n", numero);
    int resultado = subtrai(numero);
    printf("resultaado: %d\n", resultado);
    printf("atual: %d\n", numero);
    
    return 0;
}