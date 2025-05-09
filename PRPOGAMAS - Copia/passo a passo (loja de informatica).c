#include <stdio.h>

int main() {
    int opcao, quantidade;
    char continuar;
    double total = 0.0;
    
    do {
        // Exibição do menu
        printf("\n--- Menu de Produtos ---\n");
        printf("1. Teclado - R$ 100,00\n");
        printf("2. Mouse - R$ 50,00\n");
        printf("3. Monitor - R$ 800,00\n");
        printf("4. Placa de Vídeo - R$ 2000,00\n");
        printf("5. Sair\n");
        printf("Escolha um produto (1-5): ");
        scanf("%d", &opcao);

        // Processamento das opções
        switch(opcao) {
            case 1:
                printf("Digite a quantidade de Teclados: ");
                scanf("%d", &quantidade);
                total += 100.00 * quantidade;  // Atualiza o total da compra
                printf("Produto(s) adicionado(s): %d Teclado(s) - Preço Total: R$ %.2f\n", quantidade, 100.00 * quantidade);
                break;
            case 2:
                printf("Digite a quantidade de Mouses: ");
                scanf("%d", &quantidade);
                total += 50.00 * quantidade;   // Atualiza o total da compra
                printf("Produto(s) adicionado(s): %d Mouse(s) - Preço Total: R$ %.2f\n", quantidade, 50.00 * quantidade);
                break;
            case 3:
                printf("Digite a quantidade de Monitores: ");
                scanf("%d", &quantidade);
                total += 800.00 * quantidade;  // Atualiza o total da compra
                printf("Produto(s) adicionado(s): %d Monitor(es) - Preço Total: R$ %.2f\n", quantidade, 800.00 * quantidade);
                break;
            case 4:
                printf("Digite a quantidade de Placas de Vídeo: ");
                scanf("%d", &quantidade);
                total += 2000.00 * quantidade; // Atualiza o total da compra
                printf("Produto(s) adicionado(s): %d Placa(s) de Vídeo - Preço Total: R$ %.2f\n", quantidade, 2000.00 * quantidade);
                break;
            case 5:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        // Exibição do total atualizado
        printf("\nTotal de compras até o momento: R$ %.2f\n", total);

        // Pergunta se o cliente deseja continuar comprando
        if (opcao != 5) {
            printf("Deseja continuar comprando? (s para sim, n para não): ");
            scanf(" %c", &continuar);  // A adição de um espaço antes do "%c" é para garantir que o buffer seja limpo
        } else {
            continuar = 'n';  // Se o cliente escolher sair, ele não quer continuar comprando
        }

    } while((continuar == 's' || continuar == 'S') && opcao != 5);  // Continua comprando se a resposta for 's' ou 'S'

    // Exibir total final de compras e mensagem de agradecimento
    if (opcao == 5) {
        printf("\nTotal final de compras: R$ %.2f\n", total);
        printf("Agradecemos pela sua compra! Volte sempre!\n");
    } else if (total > 0) {
        printf("\nTotal final de compras: R$ %.2f\n", total);
        printf("Agradecemos pela sua compra! Volte sempre!\n");
    } else {
        printf("Nenhum produto foi comprado.\n");
    }
    
    return 0;
}