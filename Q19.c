/*Escreva uma fun��o em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo
usu�rio). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor
contiver os elementos 3, 5, -3 e 1, o vetor de soma ter� valores resultantes iguais a 4, 8, -3 e -1. A
fun��o deve receber 4 argumentos: os nomes dos tr�s vetores e o n�mero de elementos
presentes em cada vetor. Exemplo:
soma_vetores(vet1, vet2, resultado, 4);*/

#include <stdio.h>
#include <stdlib.h>
void soma_v(int *vet1,int *vet2,int *result,int tam){
    for(int i=0;i<tam;i++){
        result [i]= (vet1[i]+vet2[i]);
    }
}

int main()
{
    int tam, i=0,*vet1, *vet2, *soma ;

    scanf("%d", &tam);

    vet1 = (int*)(malloc(tam*sizeof(int)));
    vet2 = (int*)(malloc(tam*sizeof(int)));
    soma = (int*)(malloc(tam*sizeof(int)));

    for(int i=0; i<tam; i++){
        scanf("%d", &vet1[i]);
    }
    for(int i=0; i<tam; i++){
        scanf("%d", &vet2[i]);
    }
    for(int i=0; i<tam; i++){
    soma_v(vet1,vet2, soma, tam);
        printf("%d ", soma[i]);
    }
    free(vet1);
    free(vet2);
    free(soma);
    return 0;
}
