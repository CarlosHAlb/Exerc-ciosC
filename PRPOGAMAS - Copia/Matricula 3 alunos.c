#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float media;
} Aluno;

int main() {
    Aluno alunos[3];
    int opcao;

    printf("Cadastro de 3 alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); 
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Listar todos os alunos\n");
        printf("2. Mostrar aluno com maior média\n");
        printf("3. Buscar aluno por matrícula\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nLista de Alunos:\n");
            for (int i = 0; i < 3; i++) {
                printf("Matrícula: %d | Nome: %s | Média: %.2f\n",
                       alunos[i].matricula, alunos[i].nome, alunos[i].media);
            }
        } else if (opcao == 2) {
            int indiceMaior = 0;
            for (int i = 1; i < 3; i++) {
                if (alunos[i].media > alunos[indiceMaior].media) {
                    indiceMaior = i;
                }
            }
            printf("Aluno com maior média:\n");
            printf("Matrícula: %d | Nome: %s | Média: %.2f\n",
                   alunos[indiceMaior].matricula, alunos[indiceMaior].nome, alunos[indiceMaior].media);
        } else if (opcao == 3) {
            int mat;
            printf("Digite a matrícula do aluno: ");
            scanf("%d", &mat);
            int encontrado = 0;
            for (int i = 0; i < 3; i++) {
                if (alunos[i].matricula == mat) {
                    printf("Aluno encontrado:\n");
                    printf("Matrícula: %d | Nome: %s | Média: %.2f\n",
                           alunos[i].matricula, alunos[i].nome, alunos[i].media);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Aluno com matrícula %d não encontrado.\n", mat);
            }
        } else if (opcao == 4) {
            printf("Encerrando o programa.\n");
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}