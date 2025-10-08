/*23. O banco BANK Co. deseja utilizar o computador para determinar o limite da conta especial de seus clientes a partir do saldo da conta-corrente e da poupança. Escreva um programa para ler o saldo da conta-corrente e da poupança de um cliente e escrever o seguinte:
- A mensagem: ‘SEM CONTA ESPECIAL’ se o cliente NÃO possuir o requisito necessário para a conta especial. (REQUISITO PARA POSSUIR CONTA ESPECIAL: o saldo em, pelo menos, uma das duas contas deve estar acima de R$1000,00)
- O valor do limite da conta conforme especificação abaixo:
* O valor limite da conta especial fornecido ao cliente deve ser o dobro do maior saldo (entre c.corrente e poupança) ou o triplo do menor saldo. Deve ser fornecido o valor de limite maior entre essas 2 situações. OBS: Considere que os saldos da c.corrente e poupança não são iguais.*/

#include <stdio.h>

int main(){
    float corrente, poupanca;

    printf("Saldo da Conta Corrente: ");
    scanf("%f", &corrente);

    printf("Saldo da Conta Poupanca: ");
    scanf("%f", &poupanca);

    if (corrente <= 1000 && poupanca <= 1000)
        printf("SEM CONTA ESPECIAL");
    else if (poupanca > corrente || corrente == poupanca)
        printf("LIMITE PARA CONTA ESPECIAL R$%.2f", poupanca * 2);
    else 
        printf("LIMITE PARA CONTA ESPECIAL R$%.2f", corrente * 2); 
}