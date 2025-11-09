//14. Escreva um algoritmo que imprima toda a tabuada (de 1 a 10) utilizando uma estrutura de repetição. 

#include <stdio.h>

int main(){
    int i=1, j=1;

    for ( i = 1; i <= 10; i++){
        for ( j = 1; j <= 10; j++){
            printf("%d X %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
  