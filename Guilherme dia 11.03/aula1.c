#include <stdio.h>

void main(){
	float NUETA;
	
	    printf("Digite a nota do aluno [0-10]: ");
	
      	scanf("%f", &NUETA);
	
     	if(NUETA > 10){puts("Fora do intervalo");}
	    else{
	     
		if(NUETA < 0){puts("Fora do intervalo");}
		else{
			printf("Conceito ");
			
		if(NUETA >= 9) puts("A");
			else{
			    
		if(NUETA >= 8) puts("B");
				else
				
		if(NUETA >= 7) puts("C");
					else{
					    
		if(NUETA >= 6) puts("D");
						else puts("F");
					}	
				}
			}
		}
	}