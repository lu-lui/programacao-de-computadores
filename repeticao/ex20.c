// 20. Escreva um algoritmo para ler o número de termos, calcular e escrever o valor de S. S=1 !+2 !+3 !+4 !+...+n! 
 
#include <stdio.h>

int main(){
    int n, S = 0, fatorial = 1;

    printf("Numero de termos: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
        S += fatorial;
    }

    printf("Soma = %d\n", S);

    return 0;
}