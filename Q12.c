#include <stdio.h>
int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value;//valido
scanf("%f", &aloha);//invalido, nao da pra atribuir uma string a um array de 
aloha = "value";//invalido, nao da pra passar o array diretamente como endereco teria que ser por exemplo &aloha[0]
printf("%f", aloha);//invalido, o printf espera um float e esta passando um array, teria q ser por exemplo aloha[0]
coisas[4][4] = aloha[3];//valido
coisas[5] = aloha;//invalido, tentando atribuir um array a um elemento de 'coisas'
pf = value;//invalido, teria que ser pf=&value ja que que pf espera um endereco
pf = aloha;//valido, o array é convertido implicitamente para um ponteiro para o primerio elemento do array
}
