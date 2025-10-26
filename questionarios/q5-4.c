#include <stdio.h>

int main(){
    int i = 5, j = 10;
    int *p, *q;

    p = &i;
    *q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    printf("%d %d %d %d", i, j, *p, *q);

    return 0;
}

/*Analise as expressões (linhas 7 a 14) do programa abaixo e indique, se houver, a(s) linha(s) com erro (não compila ou dá advertência):
(x)As linhas 8, 10 e 13 contém erro.
( )Não contém erro.
( )A linha 10 contém erro.
( )As linhas 9, 10, 11 e 12 contém erro.
( )A linha 14 contém erro.*/