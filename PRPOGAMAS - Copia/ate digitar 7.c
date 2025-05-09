#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 7) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");

    return 0;
}