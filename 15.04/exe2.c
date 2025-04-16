#include <stdio.h>
#include <locale.h>

int obterNumero();
int somarNumeros(int a, int b);
void exibirSoma(int resultado);

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	exibirSoma(somarNumeros(obterNumero(), obterNumero()));
}

int obterNumero(){
	printf("Digite um número: ");
	int numero; scanf("%d", &numero);
	return numero;
}

int somarNumeros(int a, int b){
	return a + b;
}

void exibirSoma(int resultado){
	printf("A soma é %d\n", resultado);
}