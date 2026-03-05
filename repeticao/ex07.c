// 7. Escreva um programa em C para ler uma quantidade indeterminada de raios de circunferências. Para cada raio informado calcular e escrever o comprimento da respectiva circunferência. O programa deve ser encerrado ao ser fornecido para o raio um valor nulo ou negativo (nesta situação o comprimento não deve ser calculado). 

#include <stdio.h>

int main(){
    float raio;
    int opcao=1;

    do{
        printf("Digite o raio da circunferência: ");
        scanf("%f", &raio);
        if(raio <=0)
            break;
        
        printf("O comprimento do círculo é %.2f\n", 2*3.14*raio);
    } while (raio > 0);
    
    return 0;
}