//Analise o programa abaixo e indique a(s) afirmação(ões) correta(s):

#include <stdio.h>
int main()
{
    int vet[] = {4, 9, 5};
    int i, *ptr;
    ptr = vet;
    for ( i = 0; i < 3; i++){
        printf("%d ", (*ptr)++); //linha 8
    }
    return 0;
}

/*
[ ]Imprime: 4 9 12

[X]Se a linha 8 fosse printf("%d ", *ptr++); imprimiria 4 9 12

[ ]Se a linha 8 fosse printf("%d ", *ptr++); imprimiria 4 5 6

[ ]Se a linha 8 fosse printf("%d ", *ptr++); daria erro

[X]Imprime: 4 5 6
 */