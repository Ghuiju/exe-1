#include <stdio.h>

int main(){
	float KG, M, mci;
	
	printf("Informe o peso em kg: "); scanf("%f", &KG);
	
	printf("Informe a altura em m: "); scanf("%f", &M);
	
	mci = KG/(M * M); printf("IMC = %.2f\nTipo: ", mci);
	
	if(mci >= 40){puts("Obesidade Classe III"); return 0;}
	
	if(mci >= 35){puts("Obesidade Classe II"); return 0;}
	
	if(mci >= 30){puts("Obesidade Classe I"); return 0;}
	
	if(mci >= 25){puts("Sobrepeso"); return 0;}
	
	if(mci >= 18.5){puts("Intervalo Normal"); return 0;}
	else puts("Baixo Peso");
	
	return 0;
}
