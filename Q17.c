#include <stdio.h>
#include <stdlib.h>
void ordenar(int *pont, int left, int right){
    int pivot = pont[left];
    int j=0;

    for(int i=left+1; i<right; i++){
        if(pont[i]<=pivot){
            j++;
            int b = pont[left+j];
            pont[left+j] = pont[i];
            pont[i] = b;
        }
    }
    int b = pont[left];
    pont[left] = pont[left+j];
    pont[left+j] = b;
//232576
    if((left+j)-(left)>=2){
        ordenar(pont, left, left+j);
    }
    if((right)-(left+j+1)>=2){
        ordenar(pont, left+j+1, right);
    }
}
int main(){
    int tam;
    int *vetor_ord;
    scanf("%d", &tam);
    printf("\n");

    vetor_ord = (int *)malloc(tam * sizeof(int));
    for(int i=0; i<tam; i++){
        scanf("%d", &vetor_ord[i]);
        printf("\n");
    }

    ordenar(vetor_ord, 0, tam);
    for(int i=0; i<tam; i++){
        printf("%d ", vetor_ord[i]);
    }
    free (vetor_ord);
    return 0;
}


