#include <stdio.h>

int main(void) {
    char opção;

    printf("Digite uma opção:\n");
    printf("S - Secar\n");
    printf("E - Enxaguar e secar\n");
    printf("L - Lavar, Enxaguar e secar\n");
    printf("Digite a opção desejada (S, E, L, F para encerrar): ");
    opção = getchar();

    switch(opção) {
        case 'S':
        case 's':
            printf("Máquina: Secando...\n");
            break;
        case 'E':
        case 'e':
            printf("Máquina: Enxaguando e secando...\n");
            break;
        case 'L':
        case 'l':
            printf("Máquina: Lavando, enxaguando e secando...\n");
            break;
        case 'F':
        case 'f':
            printf("Programa encerrado.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}