#include <stdio.h>

// Declaração de uma função de multiplicacao
int vezes(int a, int b) {
    return a * b;
}

int main() {
    int (*p)(int, int); // Declaração de um ponteiro para uma função que recebe dois inteiros e retorna um inteiro

    p = vezes; // Atribui o endereço da função vezes ao ponteiro p

    int resultado = (*p)(3, 4); // Chama a função vezes indiretamente através do ponteiro p

    printf("Resultado: %d\n", resultado); // Imprime o resultado da multiplicacao

    return 0;
}
//vai imprimir 12
