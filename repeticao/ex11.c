// 11. Repita o exercício anterior utilizando uma estrutura de repetição while().
  
#include <stdio.h>

int main(){
    float numerador, denominador;

    printf("DIVISAO DE NUMEROS: \nNumerador: ");
    scanf("%f", &numerador);
    
    printf("Denominador: ");
    scanf("%f", &denominador);

    while (denominador == 0){
        printf("O denominador nao pode ser nulo, digite novamente. \nDenominador:");
        scanf("%f", &denominador);
    }
    
   printf("Resultado da divisao: %.2f", numerador / denominador);        
    
    return 0;
}