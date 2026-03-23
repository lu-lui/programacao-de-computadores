// 8. Modifique a estrutura ponto a fim de representar pontos em um espaço tridimensional. Crie um algoritmo que leia um conjunto de pontos (determinados por um valor sentinela) e calcule o cubo que contém todos estes pontos. Imprima as coordenadas dos vértices do cubo. 

#include <stdio.h>

typedef struct ponto{
    int x;
    int y;
    int z;
}ponto;

int main(){

    ponto p;
    int c = 1;

    int minX, minY, minZ;
    int maxX, maxY, maxZ;

    int primeiro = 1;

    printf("Pontos de um cubo\nDigite a coordenada (0, 0, 0 para parar):\n");

    while (1){
        printf("\tPonto %d: \nX: ", c);
        scanf("%d", &p.x);
        printf("Y: ");
        scanf("%d", &p.y);
        printf("Z: ");
        scanf("%d", &p.z);

        c++;

        if (p.x == 0 && p.y == 0 && p.z == 0)
            break;

        if (primeiro){
            minX = maxX = p.x;
            minY = maxY = p.y;
            minZ = maxZ = p.z;
            primeiro = 0;
        }

        if (p.x < minX) minX = p.x;
        if (p.x > maxX) maxX = p.x;

        if (p.y < minY) minY = p.y;
        if (p.y > maxY) maxY = p.y;

        if (p.z < minZ) minZ = p.z;
        if (p.z > maxZ) maxZ = p.z;

    }

    int lado = maxX - minX;
    if (maxY - minY > lado) lado = maxY - minY;
    if (maxZ - minZ > lado) lado = maxZ - minZ;

    printf("\nVertices do cubo:\n");

    printf("(%d, %d, %d)\n", minX, minY, minZ);
    printf("(%d, %d, %d)\n", minX + lado, minY, minZ);
    printf("(%d, %d, %d)\n", minX, minY + lado, minZ);
    printf("(%d, %d, %d)\n", minX, minY, minZ + lado);
    printf("(%d, %d, %d)\n", minX + lado, minY + lado, minZ);
    printf("(%d, %d, %d)\n", minX + lado, minY, minZ + lado);
    printf("(%d, %d, %d)\n", minX, minY + lado, minZ + lado);
    printf("(%d, %d, %d)\n", minX + lado, minY + lado, minZ + lado);

    return 0;
}