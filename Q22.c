//    10 em binário: 1010   1 em binário: 0001
#include <stdio.h>
int main(){
int a, b;
int x, y, z;
scanf("%d %d", &a, &b);
x = a; y = b; z = a + b;
while (a) {//enquanto a for diferente de 0
x = x | b; //OR bit a bit, onde houver 1 no x ou b coloca 1 no x, então 1010|0001=1011(11 em decimal)
y = y ^ a;//XOR bit a bit, cada bit  em y é invertido se em a for 1, então 0001^1010=1011 (11 em decimal)
z = z & (a+b);//AND bit a bit, o bit em z vai ser 1 se em z e (a+b) for 1,então 1011&1011 = 1011 (11 em decimal)
a = a >> 1;
b = b << 1;
}
printf ("%d %d %d\n", x, y, z);
return 0;
}
//saida: 11 11 11
