#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;
    char continuar;

    printf("=====================================\n");
    printf("    Bem-vindo à TechWorld Store!    \n");
    printf(" Sua loja de Informática favorita!  \n");
    printf("=====================================\n");

    do {
        printf("\n--- Menu de Produtos ---\n");
        printf("1. Teclado - R$ 100,00\n");
        printf("2. Mouse - R$ 50,00\n");
        printf("3. Monitor - R$ 800,00\n");
        printf("4. Placa de Vídeo - R$ 2000,00\n");
        printf("5. Sair\n");
        printf("Escolha um produto (1-5): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de Teclados: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 100.00;
                }
                printf("Produto(s) adicionado(s): %d Teclado(s) - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 2:
                printf("Digite a quantidade de Mouses: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 50.00;
                }
                printf("Produto(s) adicionado(s): %d Mouse(s) - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 3:
                printf("Digite a quantidade de Monitores: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 800.00;
                }
                printf("Produto(s) adicionado(s): %d Monitor(es) - Preço Total: R$ %.2f\n", quantidade, total);
                break;
            case 4:
                printf("Digite a quantidade de Placas de Vídeo: ");
                scanf("%d", &quantidade);
                for (int i = 0; i < quantidade; i++) {
                    total += 2000.00;
                }
                printf("Produto(s) adicionado(s): %d Placa(s) de Vídeo - Preço Total: R$ %.2f\n", quantidade, total);
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