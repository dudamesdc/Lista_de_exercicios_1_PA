#include <stdio.h>
int main() {
  
  int vet[] = {4, 9, 13};//inicializa e declara um array
  int i;
  for(i=0;i<3;i++){//repeticao que inicia no i=0 e vai até i=2
  printf("%d ", *(vet+i));//imprime a desreferencia do endereco vet[0],vet[1] e vet[2]
  }
}
// a saída: 4 9 13
//em C quando usa uma expressao com um array, ele se torna o endereço, exemplo: vet[] + i vira o endereco de vet[i]
