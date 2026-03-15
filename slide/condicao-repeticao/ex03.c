//3. Dados três números inteiros correspondentes, respectivamente, ao dia, mês e ano de nascimento de uma pessoa e três outros números correspondentes ao dia, mês e ano corrente (ex. data de hoje), calcular e imprimir a idade em anos completos. Verificar se as datas são compatíveis (nascimento <= corrente).

#include <stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

int main(){
    data nascimento, hoje;
    int idade;

    printf("Digite a data de hoje (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &hoje.dia, &hoje.mes, &hoje.ano);

    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);

    while (nascimento.ano > hoje.ano  || (nascimento.ano == hoje.ano && nascimento.mes > hoje.mes) || (nascimento.ano == hoje.ano && nascimento.mes == hoje.mes && nascimento.dia > hoje.dia)){
        printf("Data inválida, digite a data de nascimento novamente: ");
        scanf("%d/%d/%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);
    }

    if(nascimento.mes > hoje.mes || (nascimento.mes == hoje.mes && nascimento.dia > hoje.dia))
        idade = hoje.ano - nascimento.ano - 1;
    else
        idade = hoje.ano - nascimento.ano;
    
    printf("Você possui %d anos completos\n", idade);
    
    return 0;
}