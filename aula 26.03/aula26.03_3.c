#include <stdio.h>

int main() {
    char item;
    int batata = 0, hamburguer = 0, suco = 0, combo = 0;
    int total_items = 0;
    float total_value = 0.0;

    printf("Digite a letra correspondente ao produto vendido:\n");
    printf("b - Batata (R$ 10,00)\n");
    printf("h - Hamburguer (R$ 15,00)\n");
    printf("s - Suco (R$ 9,00)\n");
    printf("c - Combo (R$ 30,00)\n");
    printf("x - Para sair\n");

    while (1) {
        printf("Item: ");
        item = getchar();
        getchar(); 

        if (item == 'x') {
            break;
        }

        switch (item) {
            case 'b':
                batata++;
                total_value += 10.0;
                break;
            case 'h':
                hamburguer++;
                total_value += 15.0;
                break;
            case 's':
                suco++;
                total_value += 9.0;
                break;
            case 'c':
                combo++;
                total_value += 30.0;
                break;
            default:
                printf("Produto invalido, tente novamente.\n");
                continue;
        }

        total_items++;
    }

    printf("\nRelatório de vendas:\n");
    printf("Suco: %d vendidos\n", suco);
    printf("Batatas: %d vendidas\n", batata);
    printf("Hamburgueres: %d vendidos\n", hamburguer);
    printf("Combos: %d vendidos\n", combo);
    printf("Total: %d itens\n", total_items);
    printf("Valor total: R$ %.2f\n", total_value);

    return 0;
}