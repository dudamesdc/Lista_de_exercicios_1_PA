/*Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *num;
    int tam, i;
    scanf("%d", &tam);
    num = (float *)(malloc(tam*sizeof(float)));
    for(int i=0; i<tam; i++){
        scanf("%f", &num[i]);
    }
    for (int j=0; j<tam-1; j++){
        for (int i=0; i<tam-1; i++){
            if(num [i+1]<num[i]){
                float b=num[i];
                num[i]=num[i+1];
                num[i+1]=b;
            }
        }
    }
    for (int i=0; i<tam; i++){
        printf("%.3f\n",num[i]);
    }
    free (num);
    return 0;
}
