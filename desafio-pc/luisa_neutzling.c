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
void carregar_catalogo(Livro *lista); 
void inserir(Livro *p); 
void listar(Livro *lista);
void buscar(Livro *lista);
void editar(Livro *lista);
void excluir(Livro *lista);
void remover_n(char str[]);
void exportar(Livro *lista);
void sair(Livro *lista);

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
			excluir(lista);
			break;
		case 6:
			exportar(lista);
			break;
        case 7:
			sair(lista);
			break;
		}
	}
	return 0;
}

void carregar_catalogo(Livro *lista){
	FILE *arquivo;
    Livro *novo;

	arquivo = fopen("catalogo_inicial.txt", "r+");
	if (arquivo == NULL){
		printf("Erro na abertura");
		return;
	}
	
	printf("\tCATÁLOGO INICIAL \nTÍTULO | AUTOR | CÓDIGO | ANO DE LANÇAMENTO\n");

	while ( (novo = malloc(sizeof(Livro))) != NULL && fscanf(arquivo, "%79[^|]|%49[^|]|%19[^|]|%d\n", novo->titulo, novo->autor, novo->codigo, &novo->ano) == 4 ){
		novo->prox = lista->prox;
		lista->prox = novo;

		printf("%s | %s | %s | %d\n", novo->titulo, novo->autor, novo->codigo, novo->ano);
	}

    fclose(arquivo);
    printf("\nCatalogo carregado com sucesso!\n");
}

Livro *cria(void){
    Livro *inicio;

    inicio = (Livro *) malloc(sizeof(Livro));
    inicio->prox = NULL; 
    return inicio;
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

		if (c <= 0 || c > 7)
			printf("Opção inválida!");
		
	} while (c <= 0 || c > 7);
	getchar();
	return c;
}

void inserir(Livro *lista){
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
	
	novo->prox = lista->prox;
    lista->prox = novo;
}

void listar(Livro *lista){
	Livro *p;

	if (lista->prox == NULL){
		printf("\tNão há livros no acervo!\n");
		return;
	}
		
	printf("\tLIVROS CADASTRADOS \nTÍTULO | AUTOR | CÓDIGO | ANO DE LANÇAMENTO\n");

	for (p = lista->prox; p != NULL; p = p->prox)
		printf("%s | %s | %s | %d\n", p->titulo, p->autor, p->codigo, p->ano);	
} 

void buscar(Livro *lista){
	Livro *p;
	char titulo[80];
	int existe=0;
	
	printf("Insira o título que deseja procurar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (p = lista->prox; p != NULL; p = p->prox){
		if (strcmp(titulo, p->titulo) == 0){
			printf("\tLivro encontrado: \nTÍTULO | AUTOR | CÓDIGO | ANO DE LANÇAMENTO\n");
			printf("%s | %s | %s | %d\n", p->titulo, p->autor, p->codigo, p->ano);

            existe++;
			break;
		}
	}

	if (existe == 0)
		printf("\tO livro não foi encontrado!\n");
}

void editar(Livro *lista){
	Livro *p;
	char titulo[80];
	int existe=0;
	int escolha;

	printf("Insira o título que deseja editar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (p = lista->prox; p != NULL; p = p->prox){

		if (strcmp(titulo, p->titulo) == 0){
			printf("\tQue dado você gostaria de alterar? \n1. Título \n2. Autor \n3. Código \n4. Ano\n");
			do {
				printf("Digite sua escolha: ");
				scanf("%d", &escolha);
				getchar();

				if (escolha <=0 || escolha > 4)
					printf("Opção inválida\n");
				
			} while (escolha <= 0 || escolha > 4);

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

void excluir(Livro *lista){
	Livro *p, *q;
	char titulo[80];
	int existe=0;

	p = lista;        
    q = lista->prox;
	
	printf("Insira o título que deseja excluir: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

    while (q != NULL && strcmp(q->titulo, titulo) != 0){
        p = q;
        q = q->prox;
    }

    if (q != NULL){
        p->prox = q->prox;
        free(q);
        printf("\tLivro excluído com sucesso!\n");
        existe = 1;
    }

    if (existe == 0)
        printf("\tO livro não foi encontrado\n");
}

void exportar(Livro *info){
    FILE *arquivo;
    Livro *p;

    arquivo = fopen("catalogo_exportado.txt", "w");
    if (arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return;
    }

    for (p = info->prox; p != NULL; p = p->prox)
        fprintf(arquivo, "%s|%s|%s|%d\n", p->titulo, p->autor, p->codigo, p->ano);

    fclose(arquivo);
    printf("Catálogo exportado com sucesso!\n");
}

void remover_n(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}

void sair(Livro *lista){
    Livro *p = lista;   
    Livro *temp;           

    while (p != NULL){
        temp = p->prox;   
        free(p);        
        p = temp;          
    }

    printf("Execussão encerrada\n");
    exit(0);
}