/*//Escreva um programa que lê as coordenadas de n pontos no plano cartesiano (x, y) e identifica se estes pontos pertencem: 
    i) ao 1o. quadrante; 
    ii) ao 2o. quadrante; 
    iii) ao 3o. quadrante; 
    iv) ao quarto quadrante; 
ou estão sobre 
    v) o eixo dos “x”; 
    vi) o eixo dos “y”; ou 
    vii) estão na origem. 
Feito isso, o programa escreverá os totais de pontos em cada uma destas situações.*/

#include <stdio.h>

typedef struct ponto{
    int x;
    int y;
}ponto;

int main(){
    ponto c;
    int n, q1=0, q2=0, q3=0, q4=0, eixo_x=0, eixo_y=0, origem=0;

    printf("Quantidade de pontos a serem lidos:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Ponto %d: \nX: ", i);
        scanf("%d", &c.x);
        printf("y: ");
        scanf("%d", &c.y);

        if (c.x > 0 && c.y > 0){
            printf("O ponto pertence ao 1° quadrante\n");
            q1++;
        } else if (c.x < 0 && c.y > 0){
            printf("O ponto pertence ao 2° quadrante\n");
            q2++;
        } else if (c.x < 0 && c.y < 0){
            printf("O ponto pertence ao 3° quadrante\n");
            q3++;
        } else if (c.x > 0 && c.y < 0){
            printf("O ponto pertence ao 4° quadrante\n");
            q4++;
        } else if (c.x != 0 && c.y == 0){
            printf("O ponto está sobre o eixo X\n");
            eixo_x++;
        } else if (c.x == 0 && c.y != 0){
            printf("O ponto está sobre o eixo Y\n");
            eixo_y++;
        } else if (c.x == 0 && c.y == 0){
            printf("O ponto está na origem\n");
            origem++;
        }
        
    }
    
    printf("\tQuantidade de pontos:\n");
    printf("1° Quadrante: %d\n", q1);
    printf("2° Quadrante: %d\n", q2);
    printf("3° Quadrante: %d\n", q3);
    printf("4° Quadrante: %d\n", q4);
    printf("Sobre o eixo X: %d\n", eixo_x);
    printf("Sobre o eixo Y: %d\n", eixo_y);
    printf("Na origem: %d\n", origem);

    return 0;
}