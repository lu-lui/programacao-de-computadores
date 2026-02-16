//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 2
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Livro{
    char titulo[80];
    char autor[50];
    char codigo[20];
    int ano;
    struct Livro *prox;
} Livro;

int exibir_menu(void);
Livro *cria(void);
void inserir(Livro *p);
void listar(Livro *info);
void buscar(livro *info);
void editar(livro *info);
void excluir(livro *info);
void remover_n(char str[]);
void exportar(livro *info);
void sair(livro *info);

int main(){

	int opcao;
	Livro *lista;

	lista = cria();

	/*
    int f = fopen("catalogoinicial.txt", "r+");
    */

	for (;;) {
		opcao = exibir_menu();
		switch (opcao) {
		case 1:
			inserir(lista);
			break;
		case 2:
			listar(lista);
			break;
		case 3:
			buscar(lista);
			break;
		case 4:
			editar(&info);
			break;
		case 5:
			excluir(&info);
			break;
		case 6:
			exportar(&info);
			break;
        case 7:
			sair(&info);
			break;
		}
	}
	return 0;
}

struct Livro *cria(void){
    struct Livro *start;

    start = (struct Livro *) malloc(sizeof(struct Livro));
    start->prox = NULL; 
    return start;
}

int exibir_menu(void){
	int c = 0;
	do {
		printf("\n====== MENU ======\n");
		printf("1. Inserir livro\n");
		printf("2. Listar livros\n");
		printf("3. Buscar por título\n");
		printf("4. Editar livro\n");
		printf("5. Excluir livro\n");
        printf("6. Exportar Catálogo para Arquivo txt\n");
		printf("7. Sair\n");
		printf("==================\n");
		printf("Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 7);
	getchar();
	return c;
}

void inserir(Livro *p){
	Livro *novo;

	novo = (Livro *)malloc(sizeof(Livro));

	printf("Título: ");
	fgets(novo->titulo, 80, stdin);
	remover_n(novo->titulo);

	printf("Autor: ");
	fgets(novo->autor, 50, stdin);
	remover_n(novo->autor);

	printf("Código: ");
	fgets(novo->codigo, 20, stdin);
	remover_n(novo->codigo);

	printf("Ano de lançamento: ");
	scanf("%d", &novo->ano);
	getchar();
	
	novo->prox = p->prox;
    p->prox = novo;
}

void listar(Livro *info){
	Livro *p;

	if (info->prox == NULL){
		printf("\tNão há livros no acervo!\n");
		return;
	}
		
	for (p = info->prox; p != NULL; p = p->prox){
		printf("Título: %s\n", p->titulo);
		printf("Autor: %s\n", p->autor);
		printf("Código: %s\n", p->codigo);
		printf("Ano: %d\n", p->ano);
	}	
}  //FAZER O AS INFORMAÇÕES SEREM MOSTRADAS ENTRE " | " !!!!!

void buscar(Livro *info){
	Livro *p;
	char titulo[80];
	int existe=0;
	
	printf("Insira o título que deseja procurar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (p = info->prox; p != NULL; p = p->prox){
		if (strcmp(titulo, p->titulo) == 0){
			printf("\tLivro encontrado:\n");
			printf("\tLivro encontrado:\n");
            printf("Título: %s\n", p->titulo);
            printf("Autor: %s\n", p->autor);
            printf("Código: %s\n", p->codigo);
            printf("Ano: %d\n", p->ano);
            existe++;
			break;
		}
	}

	if (existe == 0)
		printf("\tO livro não foi encontrado!\n");
}

void editar(livro *info){
	char titulo[80];
	int existe=0;

	printf("Insira o título que deseja editar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (int i = 0; i < info->contador_livros; i++){
		int escolha;

		if (strcmp(titulo, info->titulos[i]) == 0){
			printf("\tQue dado você gostaria de alterar? \n1. T�tulo \n2. Autor \n3. C�digo \n4. Ano\n");
			printf("Digite sua escolha: ");
			scanf("%d", &escolha);
			getchar();

			switch (escolha){
				case 1:
					printf("Novo t�tulo: ");
					fgets(info->titulos[i], 80, stdin);
					remover_n(info->titulos[i]);
					break;

				case 2:
					printf("Novo nome do autor: ");
					fgets(info->autores[i], 50, stdin);
					remover_n(info->autores[i]);
					break;

				case 3: 
					printf("Novo c�digo: ");
					fgets(info->codigos[i], 20, stdin);
					remover_n(info->codigos[i]);
					break;

				case 4:
					printf("Novo ano de lan�amento: ");
					scanf("%d", &info->anos[i]);
					getchar();
					break;
				
				default:
					printf("Op�?o inv�lida\n");
					break;
			}
			
			if (escolha >=1 && escolha <=4){
				printf("Altera�?o conclu�da!\n");
				existe++;
			}	
		}
	}

	if(existe ==0)
		printf("\nT�tulo n?o encontrado\n");
}


void excluir(livro *info){
	char titulo[80];
	int existe=0;
	
	printf("Insira o t�tulo que deseja excluir: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (int i = 0; i < info->contador_livros; i++){
		if (strcmp(titulo, info->titulos[i]) == 0){
			for (int j = i; j < info->contador_livros-1; j++){
				strcpy(info->titulos[j], info->titulos[j+1]);
				strcpy(info->autores[j], info->autores[j+1]);
				strcpy(info->codigos[j], info->codigos[j+1]);
				info->anos[j] = info->anos[j+1];
			}
			printf("\tLivro exclu�do com sucesso!\n");
			info->contador_livros--;
			return;
		}
	}

	if (existe == 0)
		printf("\tO livro n?o foi encontrado\n");
}

void remover_n(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}