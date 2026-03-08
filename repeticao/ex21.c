// 21. Escreva um algoritmo para ler o número de termos, calcular e escrever o valor de S. S= 1/1! + 1/2! + 1/3! + 1/4! +...+ 1 n! S = 0;

#include <stdio.h>

int main(){
    int n, fatorial = 1;
    float S = 0;

    printf("Numero de termos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fatorial *= i;
        S += 1.0 / fatorial;
    }
    
    printf("RESULTADO: S = %.2f\n", S);

    return 0;
}