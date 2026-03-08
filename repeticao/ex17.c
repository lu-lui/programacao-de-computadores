// 17. No planeta Alpha vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida disponível a cada dia. Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passarão para atingir um quilo ou menos desse suprimento. 
  
#include <stdio.h>

int main(){
    float kg_comida;
    int c =0;

    printf("Suprimento de comida inicial: ");
    scanf("%f", &kg_comida);

    while (kg_comida > 1){
        c++;
        kg_comida /= 2;
    }
    
    printf("O suprimento durará %d dias até atingir 1kg ou menos\n", c);

    return 0;
}