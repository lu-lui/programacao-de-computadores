/*O Manejo Integrado de Pragas (MIP) é uma técnica que consiste na integração de diferentes ferramentas de con- trole visando manter as pragas sempre abaixo do nível em que causam danos para as plantações. Este controle pode ser feito por meio de insetos (controle biológico), uso de inseticidas, retirada e queima da parte do vegetal afetada, entre outros. O MIP é uma alternativa proposta pela comunidade científica para diminuir o uso de agro-tóxicos, que causam a contaminação dos alimentos e do lençol freático quando aplicados indiscriminadamente.
A implementação de programas de MIP é baseada no monitoramento das populações de pragas nas áreas de produção. O conhecimento da dinâmica populacional destes organismos permite a execução de medidas de controle no momento e locais adequados. Sem a coleta de informações sobre a sua dinâmica populacional, em conjunto com os fatores ecológicos relacionados, não é possível executar o controle adequado na hora e lugares certos.
Uma técnica bastante empregada no monitoramento de insetos-praga é o uso de armadilhas, as quais podem ser iscadas com atrativos sexuais (feromônios) ou alimentares. Ao entrar nas armadilhas, que são distribuídas na área da plantação, os insetos são incapazes de deixá-la, ficando capturados em seu interior. Assim, o sistema de monitoramento de pragas irá recolher periodicamente os dados de cada armadilha através da contagem do número de indivíduos capturados.

Você deverá implementar as funções:
cria (vale 2.5pts): que aloca a célula que será cabeça da lista simplesmente encadeada, retornando seu endereço;
imprime (vale 2.5pts): que imprime na tela todos os dados de cada célula presente na lista;
carrega (vale 5pts): que lê os dados de cada praga de um arquivo texto (50%) e os insere na lista ordenados (50%) pelo nome popular.

DADOS                       SIGNIFICADO
Lagarta-do-cartucho        Nome popular
Spodoptera frugiperda      Nome científico
Milho, trigo, pastagens    Culturas atingidas
10                         Qtde limite de insetos na armadilha
25                         Temperatura mínima ideal
30                         Temperatura máxima ideal

Observe o código a seguir:*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pragas {
    char nome_popular[200];
    char nome_cientifico[200];
    char culturas[200];
    int quantidade;
    int temperatura_min;
    int temperatura_max;
    char condicoes[200];
    struct pragas *prox;
};

struct pragas *cria(void);
void imprime(struct pragas *lista);
void carrega(struct pragas *lista);

int main() {
    struct pragas *lista;
    lista = cria();
    carrega(lista);
    imprime(lista);
    return 0;
}

struct pragas *cria(void){
    struct pragas *lista;

    lista = (struct pragas *)malloc(sizeof(struct pragas));
    lista->prox = NULL;

    return lista;
}

void imprime(struct pragas *lista){
    struct pragas *novo;

    for(novo = lista->prox; novo != NULL; novo = novo->prox);
        printf("%s\n%s\n%s\n%d\n%d\n%d\n%s\n", novo->nome_popular, novo->nome_cientifico, novo->culturas, novo->quantidade, novo->temperatura_min, novo->temperatura_max, novo->condicoes);
    
}

void carrega(struct pragas *lista){
    struct pragas *novo;
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL){
        printf("Erro de abertura do arquivo\n");
        return;
    }

    while(1){
        novo = (struct pragas *)malloc(sizeof(struct pragas));
        if(novo == NULL){
            break;
        }

        if(fscanf(arquivo, " %199[^\n]\n%199[^\n]\n%199[^\n]\n%d\n%d\n%d\n%199[^\n]\n", novo->nome_popular, novo->nome_cientifico, novo->culturas, &novo->quantidade, &novo->temperatura_min, &novo->temperatura_max, novo->condicoes) != 7){
            free(novo);
            break;
        }

        novo->prox = lista->prox;
        lista->prox = novo;
        
    }

    fclose(arquivo);
}