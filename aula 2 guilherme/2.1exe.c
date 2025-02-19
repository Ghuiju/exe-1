#include <stdio.h>

int main(void) {
  float peso = 89;
  int altura = 1.75; /* teste o contrário */
  float imc = peso / altura/ altura;
  printf("Resultado: %f", imc);
  return 0;
}