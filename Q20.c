#include <stdio.h>
#include<stdlib.h>
void multiplica_matrizes(int **a,int **b,int **c,int linha,int ca,int cb){
    for(int i=0;i<linha;i++){
        for(int j=0;j<cb;j++){
            c[i][j]=0;
            for(int k=0;k<ca;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
}

void imprime_matriz(int **matriz,int linha,int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ",matriz[i][j]);
            
        }
        printf("\n");
    }
}
int main()
{
    int **a,**b,**c;
    int linha,ca,cb;
    scanf("%d",&linha);
    scanf("%d",&ca);
    scanf("%d",&cb);
    a=(int**)malloc(linha*sizeof(int*));
    for(int i=0;i<linha;i++){
        a[i]=(int*)malloc(ca*sizeof(int));
    }
    
    for(int i=0;i<linha;i++){
        for(int j=0;j<ca;j++){
            scanf("%d",&a[i][j]);
        }
    }
    b=(int**)malloc(ca*sizeof(int*));
    for(int i=0;i<ca;i++){
        b[i]=(int*)malloc(cb*sizeof(int));
    }
    
    for(int i=0;i<ca;i++){
        for(int j=0;j<cb;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    c=(int**)malloc(linha*sizeof(int*));
    for(int i=0;i<linha;i++){
        c[i]=(int*)malloc(cb*sizeof(int));
    }
    
    multiplica_matrizes(a,b,c,linha,ca,cb);
    printf("Matriz A:\n");
    imprime_matriz(b, linha, ca);

    printf("Matriz B:\n");
    imprime_matriz(b, ca, cb);

    printf("Resultado da multiplicação:\n");
    imprime_matriz(c, linha, cb);

    
    for (int i = 0; i < linha; i++) {
        free(a[i]);
    }
    free(a);

    for (int i = 0; i < ca; i++) {
        free(b[i]);
    }
    free(b);

    for (int i = 0; i < linha; i++) {
        free(c[i]);
    }
    free(c);

    return 0;
    
    
}
