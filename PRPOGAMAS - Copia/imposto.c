#include <stdio.h>

int main() {
    float salario, imposto;

    printf("Vamos calcular seu imposto de renda.\n");
    
    printf("Digite o seu salário: ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        imposto = 0.0;
        printf("Você é isento de imposto.\n");
    } else if (salario <= 2826.65) {
        imposto = (salario * 0.075) - 142.80;
        printf("A sua alíquota é de 7,5%%, você terá que pagar R$ %.2f de imposto\n", imposto);
    } else if (salario <= 3751.05) {
        imposto = (salario * 0.15) - 354.80;
        printf("A sua alíquota é de 15%%, você terá que pagar R$ %.2f de imposto\n", imposto);
    } else if (salario <= 4664.68) {
        imposto = (salario * 0.225) - 636.13;
        printf("A sua alíquota é de 22,5%%, você terá que pagar R$ %.2f de imposto\n", imposto);
    } else {
        imposto = (salario * 0.275) - 869.36;
        printf("A sua alíquota é de 27,5%%, você terá que pagar R$ %.2f de imposto\n", imposto);
    }

    return 0;
}