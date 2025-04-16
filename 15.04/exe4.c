c
Run
Copy code
#include <stdio.h>
#include <locale.h>
#include "util.h"

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	printf("Digite um número: "); scanf("%d", &numero1);
	printf("Digite um número: "); scanf("%d", &numero2);
	
	compara(numero1, numero2);
}