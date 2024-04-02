//Qual será a saída do seguinte programa
#include <stdio.h>
struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);
}

/*Há um erro de compilação no código, pois o codigo membros de uma estrutura através de um ponteiro não inicializado e inicializar membros da estrutura dentro da declaração da estrutura.*/
