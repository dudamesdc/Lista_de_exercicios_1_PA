#include <stdio.h>
int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);//20
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);//29.0
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);//P
  }
//a) e b) tiveram seus valores desreferenciados e foi declarado um novo valor ao antigo armazenado.
// Na c) teve seu primeiro caractere impresso que nessa caso é P.

  
