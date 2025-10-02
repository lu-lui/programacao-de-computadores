/*18. Um posto está vendendo combustíveis com a tabela de descontos abaixo. Escreva um programa que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1-álcool 2-Gasolina), o preço do combustível, calcule e imprima o valor a ser pago pelo cliente.
    Álcool: Até 20 litros, desconto de 3 % por litro. Acima de 20 litros, desconto de 5 % por litro.
    Gasolina: Até 15 litros, desconto de 3,5 % por litro. Acima de 15 litros, desconto de 6 % por litro*/

    #include <stdio.h>
    
    int main(){
        int resposta, litros;
        float preco, preco_final;
    
        printf("Litros de combustiveis vendidos: ");
        scanf("%d", &litros);

        printf("Tipo de combustivel (1.Etanol ou 2.Gasolina): ");
        scanf("%d", &resposta);

        printf("Preco R$: ");
        scanf("%f", &preco);

        switch (resposta){
        case 1:
            if (litros <= 20){
                preco_final =  litros * (preco * 0.97);
                printf("Valor a ser pago: R$%.2f", preco_final);
            } else {
                preco_final = (float) litros * (preco * 0.95);
                printf("Valor a ser pago: R$%.2f", preco_final);
            }
            break;

        case 2:
            if (litros <= 15){
                preco_final =  litros * (preco * 0.965);
                printf("Valor a ser pago: R$%.2f", preco_final);
            } else {
                preco_final = (float) litros * (preco * 0.94);
                printf("Valor a ser pago: R$%.2f", preco_final);
            }
            break;
            
        default:
            break;
        }
    }