#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    float c= (const float *)a-(const float *)b;
    if (c > 0) return 1;
    if (c < 0) return -1;
    return 0;
}

int main() {
    float *num;
    int tam;

    // Lendo o número de valores
    scanf("%d", &tam);

    // Alocando memória para o array de floats
    num = (float *)malloc(tam * sizeof(float));
    if (num == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Encerrando o programa com código de erro
    }

    // Lendo os valores
    for (int i = 0; i < tam; i++) {
        scanf("%f", &num[i]);
    }

    // Ordenando os valores utilizando qsort
    qsort(num, tam, sizeof(float), compare);

    // Imprimindo os valores ordenados
    for (int i = 0; i < tam; i++) {
        printf("%.3f\n", num[i]);
    }

    // Liberando a memória alocada
    free(num);

    return 0;
}
