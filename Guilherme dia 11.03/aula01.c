#include <stdio.h>

int main(){
	float mci;
	
	printf("Teste de IMC: ");
	
	scanf("%f", &mci);
	
	if(mci < 18.5){puts("Fora do intervalo normal");}

	else{
	    
		if(mci > 24.9){puts("Fora do intervalo normal");}
        
		else{puts("Intervalo normal");}
	}
}
