//19. Escreva um algoritmo para ler o número de termos, calcular e escrever o valor de S. S= 1/2 + 1/4 + 1/8 + 1/16 + 1/32 +... 
 
#include <stdio.h>

int main(){
    int n, x = 2;
    float S = 0;

    printf("Numero de termos: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        S += 1.0 / x;
        x *= 2;
    }

    printf("Valor de S = %.4f\n", S);

    return 0;
}