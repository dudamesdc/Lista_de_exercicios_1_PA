/* 
I. O resultado da impressão na linha 24 é: 7 - 7.

Ao chamar funcao1(vetor, 15), ela retorna o índice do elemento 15 no vetor, que é 7. E ao chamar funcao2(vetor, 15, 0, TAM-1), ela também retorna 7, pois 15 está na posição 7 do vetor. Portanto, a afirmação é verdadeira.
II. A função funcao1, no pior caso, é uma estratégia mais rápida do que a funcao2.

A função funcao1 implementa uma busca linear no vetor, percorrendo-o elemento por elemento até encontrar o valor desejado ou até percorrer todo o vetor. No pior caso, isso requer percorrer todos os elementos do vetor, o que tem complexidade O(n), onde n é o tamanho do vetor.
Já a função funcao2 implementa uma busca binária, que tem complexidade O(log n) no pior caso, pois divide repetidamente o vetor ao meio até encontrar o valor desejado ou até que a busca não seja mais possível. Portanto, no pior caso, a função funcao2 é mais rápida que a funcao1, pois a complexidade de O(log n) é melhor do que O(n). Portanto, a afirmação é falsa.
III. A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo.

A função funcao2 implementa uma busca binária, que é uma estratégia de busca recursiva. Ela divide o vetor ao meio e chama a si mesma recursivamente até encontrar o valor desejado ou até que a busca não seja mais possível. Portanto, a afirmação é falsa.
Portanto, a resposta correta é a alternativa IV. I, apenas.
*/
