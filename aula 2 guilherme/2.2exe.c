#include <stdio.h>

void main(void) {
  float peso;
  float altura;
  float imc;

printf("digite seu peso: ");
  scanf("%f", &peso);
  
printf("digite seu altura: ");
  scanf("%f", &altura);

   imc = peso/(altura*altura);

  printf("Seu imc é : %f", imc);
}