/* 11. Crie duas estruturas para representarem escolas e alunos. A estrutura escola deve armazenar a posição da escola na cidade (coordenadas x e y) e o seu raio de abrangência de alunos. A estrutura alunos deve armazenar a posição (coordenadas x e y) destes alunos. Faça um algoritmo que: 
    • Leia um conjunto de informações de escolas e de alunos (use sentinelas). 
    • Determine, para todos os alunos, quais escolas os abrigam. 
    • Em caso de mais de uma escola abrigar o mesmo aluno, indique para este aluno qual é a escola mais próxima.*/

// #include <stdio.h>

// typedef struct escolas{
//     int x;
//     int y;
//     int raio;
// }escolas;

// typedef struct alunos{
//     int x;
//     int y;
// }alunos;

// int main(){
//     alunos aluno[100];
//     escolas escola[100]; 

//     printf("---ESCOLAS---\n");
//     for(int i = 0 ;; i++){
//         printf("Escola %d:\nCoordenada X: ", i);
//         scanf("%d", &escola[i].x);
//         printf("Coordenada Y: ", i);
//         scanf("%d", &escola[i].y);
//         printf("Raio de abrangência: ", i);
//         scanf("%d", &escola[i].raio);

//         if(escola[i].x == 0 && escola[i].y == 0 && escola[i].raio == 0)
//             break;
//     }

//     printf("---ALUNOS---\n");
//     for(int i = 0 ;; i++){
//         printf("Escola %d:\nCoordenada X: ", i);
//         scanf("%d", &aluno[i].x);
//         printf("Coordenada Y: ", i);
//         scanf("%d", &aluno[i].y);

//         if(aluno[i].x == 0 && aluno[i].y == 0)
//             break;
//     }

//     return 0;
// }

//modificar com lista encadeada