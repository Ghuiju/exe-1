#include <stdio.h>

int main(void) {
    char tamanho;

    int quantidadeP = 0;
    int quantidadeM = 0;
    int quantidadeG = 0;

    printf("Digite o tamanho recebido, F para encerrar:\n");

    while (1) {
        tamanho = getchar();

        while (getchar() != '\n');

        if (tamanho == 'F') {
            break;
        }

        switch (tamanho) {
            case 'P':
                quantidadeP++;
                break;
            case 'M':
                quantidadeM++;
                break;
            case 'G':
                quantidadeG++;
                break;
            default:
                printf("Tamanho inválido. Por favor, digite P, M, G ou F para encerrar.\n");
                break;
        }

        printf("Digite o tamanho recebido, F para encerrar:\n");
    }

    printf("P: %d M: %d G: %d\n", quantidadeP, quantidadeM, quantidadeG);
    return 0;
}