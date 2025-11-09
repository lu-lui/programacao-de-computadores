//5. Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da senha incorreta informada escrever a mensagem “SENHA INVÁLIDA”. Quanto a senha for informada corretamente deve ser impressa a mensagem “ACESSO PERMITIDO” e o algoritmo encerrado. Considere que a senha correta é o valor 2005. 

#include <stdio.h>

int main(){
    int senha = 2005;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 2005)
            printf("ACESSO PERMITIDO");
        else
            printf("ACESSO NEGADO \n");
        
    } while (senha != 2005);

    return 0;
}
