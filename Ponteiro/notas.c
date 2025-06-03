#include <stdio.h>
#include <stdlib.h>
#include "notas.h"

void cadastrarNota(Nota *nota, int *conta) {
    printf("Cadastrar Nota\n");
    printf("Informe a Matricula do Aluno : ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota : ");
    scanf("%f", &nota->nota);
    *conta = *conta + 1;
}