#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);

    puts(idade >= 60? "Pode ser atendido" : "Não pode ser atendido");

    return 0;
}