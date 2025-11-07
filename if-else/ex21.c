/* 21. Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo. OBS: 
triângulo retângulo: possui um ângulo reto. 
triângulo obtusângulo: possui um ângulo obtuso. 
triângulo acutângulo: possui 3 ângulos agudos.*/

#include <stdio.h>

int main(){
    int angulo[3];

    printf("Descubra o nome do triangulo! \nDigite as inclinacoes dos angulos:\n");

    for (int i = 0; i < 3; i++){
        printf("Angulo %d: ", i + 1);
        scanf("%d", &angulo[i]); 
    }
    
    if (angulo[0] == 90 || angulo[1] == 90 || angulo[2] == 90){
        printf("O triangulo e retangulo");
    } else if (angulo[0] > 90 || angulo[1] > 90 || angulo[2] > 90){
        printf("O triangulo e obtusangulo");
    } else if (angulo[0] < 90 && angulo[1] < 90 && angulo[2] < 90){
        printf("O triangulo e acutangulo");
    }
}

