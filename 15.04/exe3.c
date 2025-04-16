#include <stdio.h>
#include <locale.h>
#include "util.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor do raio: ");
	double raio; scanf("%lf", &raio);
	
	printf("Diâmetro: %.2lf\n", calcularDiametro(raio));
	printf("Circunferência: %.2lf\n", calcularCircunferencia(raio));
	printf("Área: %.2lf", calcularArea(raio));
	
	return 0;
}