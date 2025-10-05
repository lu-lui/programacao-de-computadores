// 20. Escreva um programa que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.

#include <stdio.h>

int main(){
    int homem[2], mulher[2];

    for (int i = 0; i < 2; i++){
        printf("Digite a idade do homem %d: ", i);
        scanf("%d", &homem[i]);
    }

    for (int i = 0; i < 2; i++){
        printf("Digite a idade da mulher %d: ", i);
        scanf("%d", &mulher[i]);
    }
    
    printf("Calculo de idades: \n");
    if (mulher[0] > mulher [1]){
        if (homem[0] > homem[1]){
            printf("Homem mais velho + Mulher mais nova = %d \nHomem mais novo * Mulher mais velha = %d ", homem[0] + mulher[1], homem[1] * mulher[0]);
        } else {
            printf("Homem mais velho + Mulher mais nova = %d \nHomem mais novo * Mulher mais velha = %d ", homem[1] + mulher[1], homem[0] * mulher[0]);
        } 
    } else {
        if (homem[0] > homem[1]){
            printf("Homem mais velho + Mulher mais nova = %d \nHomem mais novo * Mulher mais velha = %d ", homem[0] + mulher[0], homem[1] * mulher[1]);
        } else {
            printf("Homem mais velho + Mulher mais nova = %d \nHomem mais novo * Mulher mais velha = %d ", homem[1] + mulher[0], homem[0] * mulher[1]);
        } 
    }
}
