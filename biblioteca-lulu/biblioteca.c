//se precisar, colocar os #includes

#include "biblioteca.h"
//colocar entre "" porque não é uma biblioteca padrão do c
//se não estiver na mesma pasta precisa colocar todo o caminho

int fibonacci(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}