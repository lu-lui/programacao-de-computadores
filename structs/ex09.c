/* 9. Crie as estruturas necessárias para o armazenamento das informações de CD's de músicas de um acervo, como as seguintes: 
    • Nome do Artista/Grupo/Banda 
    • Nome do Álbum 
    • Data de Lançamento do CD 
    • Valor do CD 
    • Nome da Produtora/Gravadora 
    • Código e Nome do Gênero Musical 
    • Total de Faixas de um disco e Número, Título e Duração de cada Faixa do CD 
    • Algo que identifique se o CD é single (um CD), duplo (2 CDs) ou Box (+ de 2CDs). 
    
Crie um algoritmo que permita preencher as informações deste acervo de CDs e faça algumas operações sobre o acervo, como as seguintes: 
    • Buscar por Artista/Grupo/Banda 
    • Buscar por Álbum 
    • Buscar por Gênero 
    • Buscar por Título de Faixa 
    • Listar (imprimir) todo o acervo (Artista, Álbum e Faixas) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct faixa{
    int numero;
    char titulo[20];
    float duração; 
    struct faixa *prox;
}faixa;

typedef struct acervo{
    char artista[30];
    char album[30];
    float valor;
    char gravadora[30];
    char codigo[10];
    char genero[20];
    char tipo[10]; //single, duplo, box
    struct faixa faixas;
    struct acervo *prox;
}cd;

cd *cria(void);
int menu(void);
void inserir(cd *lista);
void buscar_artista (cd *lista);
void buscar_album(cd *lista);
void buscar_genero(cd *lista);
void buscar_titulo_faixa(cd *lista);
void listar_acervo(cd *lista);
void exportar_acervo(cd *lista); //extra
void sair(cd *lista);

int main(){
    cd *lista;
    int opcao;

    lista = cria();

    for(;;){
        opcao = menu();

        switch (opcao){
        case 1:
            inserir(lista);
            break;

        case 2:
            buscar_artista(lista);
            break;

        case 3:
            buscar_album(lista);
            break;

        case 4:
            buscar_genero(lista);
            break;

        case 5:
            buscar_titulo_faixa(lista);
            break;

        case 6:
            listar_acervo(lista);
            break;

        case 7:
            exportar_acervo(lista);
            break;

        case 8:
            sair(lista);
        
        default:
            break;
        }
    }
    
    return 0;
}

int menu(void){
    int opcao;

    printf("\tACERVO DE CD's\nSelecione uma opção:\n");
    printf("1. Inserir CD's\n");
    printf("2. Buscar por Artista/Grupo/Banda\n");
    printf("3. Buscar por Álbum\n");
    printf("4. Buscar por Gênero\n");
    printf("5. Buscar por Faixa\n");
    printf("6. Listar todo o acervo\n");
    printf("7. Exportar para catálogo.txt\n");
    printf("8. Sair\n");

    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 8){
        printf("Opção inválida, tente novamente:\n");
        scanf("%d", &opcao);
    }

    return opcao;
}

cd *cria(void){
    cd *lista;

    lista = (cd *)malloc(sizeof(cd));
    lista->prox = NULL;
}

void inserir(cd *lista){
    cd *novo, *anterior, *atual;

    anterior = lista;
    lista = lista->prox;

    novo = (cd *)malloc(sizeof(cd));
    novo->prox = NULL;

    
}

void buscar_artista(cd *lista){

}

void buscar_album(cd *lista){

}

void buscar_genero(cd *lista){

}

void buscar_titulo_faixa(cd *lista){

}

void listar_acervo(cd *lista){

}

void exportar_acervo(cd *lista){
    FILE *arquivo;
    cd *p;
    
    arquivo = fopen("catalogo.txt", "w");

    for (p = lista->prox; p != NULL; p = p->prox){
        
    }
    

    fclose(arquivo);
}

void sair(cd *lista){

}