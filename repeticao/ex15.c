//15. Escreva um algoritmo que forneça quantos números devem ser somados em sequência a partir do 1 (1,2,3,4, ...) de modo que não ultrapasse um valor n informado pelo usuário. 
  
#include <stdio.h>

int main(){
    int n, c=0, s=0;

    printf("Digite um número: ");
    scanf("%d", &n);

   for (int i = 1; s < n; i++){
        s += i;
        if(s>n)
            break;

        c++;
    }
    
    printf("%d números devem ser somados em sequência para se chegar a %d\n", c, n);

    return 0;
}