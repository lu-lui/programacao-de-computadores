// Analise o programa C abaixo e indique o que será impresso:

#include <stdio.h>
#include <math.h>

float f (float par);
float g (float par);
float h (float par);

int main(){
    printf("%f", h(25));
    return 0;
}

float f(float par) {
    return 2*par;
}

float g (float par) {
    return f(sqrt(par));
}

float h (float par) {
    return pow(g(par),3);
}

/*
( ) Compila, executa e imprime 10.000000

( ) Não compila

(X) Compila, executa e imprime 1000.000000

( ) Compila mas dá erro na execução

( ) Compila, executa e imprime 15625.000000
*/