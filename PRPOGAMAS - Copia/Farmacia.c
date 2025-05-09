#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;
    char continuar;

    printf("=====================================\n");
    printf("    Bem-vindo à Farmalife !    \n");
    printf("=====================================\n");

    do {
        printf("\n--- Menu de Produtos ---\n");
        printf("1. Paracetamol - R$ 5,00\n");
        printf("2. Ibuprofeno - R$ 7,50\n");
        printf("3. Dipirona - R$ 4,00\n");
        printf("4. Amoxicilina - R$ 12,00\n");
        printf("5. Sair\n");
        printf("Escolha um produto (1-5): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de Paracetamol: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 5.00;
                }
                printf("Produto(s) adicionado(s): %d Paracetamol - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 2:
                printf("Digite a quantidade de Ibuprofeno: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 7.50;
                }
                printf("Produto(s) adicionado(s): %d Ibuprofeno(s) - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 3:
                printf("Digite a quantidade de Dipirona: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 4.00;
                }
                printf("Produto(s) adicionado(s): %d Dipirona(s) - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 4:
                printf("Digite a quantidade de Amoxicilina: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 12.00;
                }
                printf("Produto(s) adicionado(s): %d Amoxicilina - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 5:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\nTotal de compras até o momento: R$ %.2f\n", total);

        if (opcao != 5) {
            printf("Deseja continuar comprando? (s para sim, n para não): ");
            scanf(" %c", &continuar);
        } else {
            continuar = 'n';
        }

    } while ((continuar == 's' || continuar == 'S') && opcao != 5);

    if (opcao == 5 || total > 0) {
        printf("\nTotal final de compras: R$ %.2f\n", total);
        printf("Agradecemos pela sua compra! Volte sempre!\n");
    } else {
        printf("Nenhum produto foi comprado.\n");
    }

    return 0;
}