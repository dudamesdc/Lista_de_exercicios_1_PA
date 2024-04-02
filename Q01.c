//Seja o seguinte trecho de programa:**
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
//Determine o valor das seguintes expressões, justificando o porquê de cada resultado:
◦ p == &i; 
/*1, pois eh verdade que p eh igual o endereco de memoria de i*/
◦ *p - *q; 
/*-2, pois faz o valor apontado no ponteiro p (3) - o valor apontado pelo ponteiro ponteiro q (5), 3-5=-2*/
◦ **&p; 
/*3, pois acessa do valor armazenado do valor armazenado no endereço de memoria p*/
◦ 3 - *p/(*q) + 7;
/*10, pois a o valor armazenado no endereco de memoria i eh 3 e o valor armazenado no endereo de memoria j eh 5. temos que: 3- (3/5) + 7, 
como trata-se se uma divisao de inteiros, 3/5=0, logo 3+7=10*/
