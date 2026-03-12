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

typedef struct acervo{
    char 
    struct acervo *prox;
}cd;

cd *cria(void);
void inserir(*lista);
void buscar_artista(*lista);
void buscar_album(*lista);
void buscar_genero(*lista);
void buscar_titulo(*lista);
void listar_acervo(*lista);
void exportar_acervo(*lista); //extra
    