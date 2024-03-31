int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i); //imprime o valor do contador i [0,1,2,3,4]
  printf(" vet[%d] = %.1f",i, vet[i]); //imprime o valor armazenado em vet[i] [1.1, 2.2, 3.3, 4.4, 5.5]
  printf(" *(f + %d) = %.1f",i, *(f+i)); //Imprime o valor apontado pelo ponteiro f somado ao índice i. [1.1, 2.2, 3.3, 4.4, 5.5]
  printf(" &vet[%d] = %X",i, &vet[i]); // Imprime o endereço de array vet[i].
  printf(" (f + %d) = %X",i, f+i); // Imprime o endereço calculado pelo ponteiro f somado ao índice i.
  printf("\n");
  }
}
/*Saída do programa:
contador/valor/valor/endereco/endereco
i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = END.vet[0] (f + 0) = END.vet[0]
i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = END.vet[1] (f + 1) = END.vet[1]
i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = END.vet[2] (f + 2) = END.vet[2]
i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = END.vet[3] (f + 3) = END.vet[3]
i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = END.vet[4] (f + 4) = END.vet[4]*/
