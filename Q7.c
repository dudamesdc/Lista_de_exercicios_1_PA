/*Considerando a declaração
int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique.*/
p = mat + 1;
//válida, mostra o valor do mat[1] endereço de memória
p = mat;
//valida, atribui o endereço do primeiro elemento do array à p.
p = mat;
//valida, atribui o endereço do primeiro elemento do array à p.
x = (*mat); 
//acessa o valor do primeiro elemento do array e atribui à i.
