/* 10. Crie uma estrutura que armazene as informações de um ponto, tais como: coordenadas (x, y), a altitude naquele ponto e o tipo de vegetação (utilize os códigos: 1 = banhado, 2 = água, 3 = campo, 4 = arroz, 5 = solo exposto, 6 = mata de restinga, 7 = aluvial, 8 = praias lagunares, 9 = área urbana, 10 = mata de pinus e 11 = dunas). Desenvolva um algoritmo que: 
    • Leia um conjunto de informações de pontos (use sentinela), preenchendo a estrutura definida. 
    • Determine, pelo número de pontos, qual é o tipo de vegetação mais abundante. 
    • Encontre os pontos mais alto e mais baixo e os tipos de vegetações nestes pontos. */

#include <stdio.h>

typedef enum {banhado =1, agua, campo, arroz, solo_exposto, mata_de_restinga, aluvial, praias_lagunares, área_urbana, mata_de_pinus, dunas} vegetacao;

typedef struct ponto{
    int x;
    int y;
    float altitude;
    vegetacao tipo;
}ponto;

// int main(){
//     ponto p;
//     int c=1;

//     while (1){
//         printf("\tPonto %d: \nCoordenadas: (x, y): ", c);
//         scanf("(%d, %d)", &p.x, &p.y);
//         printf("Altitude: ");
//         scanf("%f", &p.altitude);
//         printf("Tipo de vegetação: \n1 = Banhado \n2 = água \n3 = campo \n4 = arroz \n5 = solo exposto \n6 = mata de restinga \n7 = aluvial \n8 = praias lagunares \n9 = área urbana \n10 = mata de pinuse \n11 = dunas\n");
//         scanf("%d", p.tipo);

//         c++;
        
//         if(p.x == 0 && p.y == 0 && p.tipo == 0 && p.altitude == 0)
//             break;

//     }
    

//     return 0;
// }