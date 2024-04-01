#include <stdio.h>
#include <stdlib.h>
float compare(const void *a,const void *b){
   return *(int *) a-*(int *)b 
}
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
            qsort(array, tam, sizeof(float), compare(num[i],num[i+1])
        }
    }
    for (int i=0; i<tam; i++){
        printf("%.3f\n",num[i]);
    }
    free (num);
    return 0;
}
