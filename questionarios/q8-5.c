//Observe o programa C abaixo e indique a opção correta:

#include <stdio.h>

int main(){
    FILE * arquivo;
    int i, q;

    arquivo=fopen("questao01in.txt", "w");

    q=0;
    while (fscanf(arquivo, "%d", &i) == 1){
        q++;
        printf("%d ", i);
    }
    printf("\nTotal: %d\n", q);
    fclose(arquivo);

    return 0;
}

/*
( ) Compila, executa mas dá erro, por causa da linha 7.

( ) Não compila

( ) Nenhuma das outras alternativas

(X) Compila sem advertências, executa e imprime:
Total: 0

( ) Compila sem advertências, executa e imprime:
1 2 3 4 5 6 7 8 9 10
Total: 10
*/