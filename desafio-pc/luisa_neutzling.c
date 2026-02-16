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
void carregar_catalogo(Livro *info); 
void inserir(Livro *p); 
void listar(Livro *info);
void buscar(Livro *info);
void editar(Livro *info);
void excluir(Livro *info);
void remover_n(char str[]);
void exportar(Livro *info);
void sair(Livro *info);

int main(){

	int opcao;
	Livro *lista;

	lista = cria();

	carregar_catalogo(lista); 

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
			editar(lista);
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

void carregar_catalogo(Livro *info){
	FILE *arquivo;
	arquivo = fopen("catalogo_inicial.txt", "r+");
	if (arquivo == NULL){
    printf("Erro na abertura");
    exit(1);
} 

Livro *cria(void){
    Livro *start;

    start = (Livro *) malloc(sizeof(Livro));
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

void inserir(Livro *info){
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
	
	novo->prox = info->prox;
    info->prox = novo;
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

void editar(Livro *info){
	Livro *p;
	char titulo[80];
	int existe=0;
	int escolha;

	printf("Insira o título que deseja editar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (p = info->prox; p != NULL; p = p->prox){

		if (strcmp(titulo, p->titulo) == 0){
			printf("\tQue dado você gostaria de alterar? \n1. Título \n2. Autor \n3. Código \n4. Ano\n");
			printf("Digite sua escolha: ");
			scanf("%d", &escolha);
			getchar();

			switch (escolha){
				case 1:
					printf("Novo título: ");
					fgets(p->titulo, 80, stdin);
					remover_n(p->titulo);
					break;

				case 2:
					printf("Novo nome do autor: ");
					fgets(p->autor, 50, stdin);
					remover_n(p->autor);
					break;

				case 3: 
					printf("Novo código: ");
					fgets(p->codigo, 20, stdin);
					remover_n(p->codigo);
					break;

				case 4:
					printf("Novo ano de lançamento: ");
					scanf("%d", &p->ano);
					getchar();
					break;
				
				default:
					printf("Opção inválida\n");
					return;
			}
			
			if (escolha >=1 && escolha <=4){
				printf("Alteração concluída!\n");
				existe++;
				break;
			}	
		}
	}

	if(existe ==0)
		printf("\nTítulo não encontrado\n");
}


void excluir(Livro *info){
	char titulo[80];
	int existe=0;
	
	printf("Insira o título que deseja excluir: ");
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