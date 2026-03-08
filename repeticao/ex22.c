/*22. Escrever os números de 1 a n com seus respectivos divisores. Siga o formato: 
1: 1 
2: 1 2 
3: 1 3 
4: 1 2 4 
5: 1 5 
6: 1 2 3 6 
7: 1 7 
8: 1 2 4 8 ...*/

#include <stdio.h>

int main(){
    int n;

    printf("Numero de termos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("\n%d: ", i);

        for (int j = 1; j <= i; j++){
            if (i % j == 0)
                printf("%d ", j);
        }
    }

    return 0;
}