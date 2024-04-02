/*Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição são ilegais? Justifique.*/

p = &i;
//legal. Atribui o endereco da variavel i ao ponteiro p
*q = &j;
//ilegal. Não é permitido atribuir o endereço de j a um inteiro.
p = &*&i;
//legal. O resultado será o endereço de i, pois primieiro o operador & pega o endereço de i, * traz o valor contido nesse endereço, e o outro * traz o endereço deste valor.
i = (*&)j;
// ilegal. * espera um ponteiro e & eh um endereço de memoria. A operacao do jeito que foi escrita nao faz sentido por causa dos ()
i = *&j;
// legal. neste caso, i=j.
i = *&*&j;
//legal. faz o mesmo processo da anterior, porem 2 vezes.
q = *p;
//ilegal. *p é um valor inteiro, e q é um ponteiro para inteiro. Não é permitido atribuir diretamente um valor inteiro a um ponteiro
i = (*p)++ + *q;
//legal. incrementa o valor apontado por p, usa o valor original para somar com o valor apontado por q.
