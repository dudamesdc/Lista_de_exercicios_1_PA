//A saida vai dar erro.
#include <stdio.h>
void main(){
  int const *x = 3;//declara x como um ponteiro constante mas o inicializa como um inteiro ao inves de um endereco
  printf("%d", ++(*x));// aqui tenta incrementar o valor de x mas ele foi inicializado incorretamente.
}
