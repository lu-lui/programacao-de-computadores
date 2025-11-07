// O que será impresso na tela?

#include <stdio.h>

int main(){
    int x, y, *p;

    y = 0;
    p = &y; 
    x = *p; 
    x = 4;
    (*p)++; 
    --x; 
    (*p) += x; 

    printf("%d %d\n", x, y);
}

/*
( )4 3

( )0 4

( )4 1

(x)3 4

( )4 0
 */