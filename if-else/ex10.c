/*Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
- Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.
- Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.*/

#include <stdio.h>

    int main(){
        int lados;
        float medida;

        printf("Digite o numero de lados do poligono (3, 4 ou 5): ");
        scanf("%d", &lados);

        switch (lados){
        case 3:
            printf("Digite a medida dos lados: ");
            scanf("%f", &medida);
            printf("O poligono e um TRIANGULO de perimetro %.2f", medida * 3);
            break;

        case 4:
            printf("Digite a medida dos lados: ");
            scanf("%f", &medida);
            printf("O poligono e um QUADRADO de area %.2f", medida * medida);
            break;

        case 5:
            printf("O poligono e um PENTAGONO");
            break;

        default:
            break;
        }

        if (lados < 3)
            printf("Nao e um poligono");
        else if (lados > 5)
            printf("Poligono nao identificado");   
    }