/*9. Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de custo de cada bicicleta vendida, dividida igualmente entre eles. Escreva um programa que leia o número de empregados da loja, o valor do salário-mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas, calcule e escreva: O salário final de cada empregado e o lucro (líquido) da loja.*/

#include <stdio.h>

int main(){
    int funcionarios, bicicletas_vendidas;
    float salario_minimo, salario_final, custo;

    printf("Numero de funcionarios da loja: ");
    scanf("%d", &funcionarios);

    printf("Valor do salario minimo: R$");
    scanf("%f", &salario_minimo);

    printf("Custo de cada bicicleta: R$");
    scanf("%f", &custo);

    printf("Numero de bicicletas vendidas: ");
    scanf("%d", &bicicletas_vendidas);

    salario_final = (custo * 0.15 * bicicletas_vendidas + 2 * salario_minimo * funcionarios) / funcionarios;

    printf("Salario final de cada funcionario: R$%.2f", salario_final);
}