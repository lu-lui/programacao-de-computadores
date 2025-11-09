// 10. Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um programa em C para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que não deve ser zero). Enquanto for fornecido um valor nulo a leitura deve ser repetida. Utilize do...while(). 

#include <stdio.h>

int main(){
    float numerador, denominador;

    printf("DIVISAO DE NUMEROS: \nNumerador: ");
    scanf("%f", &numerador);
    
    do{
        printf("Denominador: ");
        scanf("%f", &denominador);

        if (denominador == 0)
            printf("O denominador nao pode ser nulo, digite novamente. \n");
        else
            printf("Resultado da divisao: %.2f", numerador / denominador);        
    } while (denominador == 0);
    
    return 0;
}