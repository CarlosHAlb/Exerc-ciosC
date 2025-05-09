#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Início
int main()
{
    setlocale(LC_ALL, "");
    float deposito, saque, saldof, saldo;
    int opcao;
    saldo = 1000;
    saldof = saldo;
    
    do
    {
        printf("Você tem um saldo de 1000 reais! Qual operação você deseja fazer?\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Consultar saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
            case 1:
                printf("Você escolheu a opção Deposito!\n");
                printf("Qual o valor do deposito?\n");
                scanf("%f", &deposito);  
                saldof = saldof + deposito;
                printf("Deposito finalizado!\n");
                break;
            case 2:
                printf("Você escolheu a opção saque!\n");
                printf("Qual o valor do saque?\n");
                scanf("%f", &saque);  
                if (saque > saldof)  
                {
                    printf("Saldo insuficiente! Não foi possivel realizar o saque.\n");
                }
                else 
                {
                    saldof = saldof - saque;
                    printf("Saque concedido!\n");
                }
                break;
            case 3:
                printf("Você escolheu a opção Consultar saldo!\n");
                printf("Seu saldo é: %.2f\n", saldof);  
                break;
            case 4: 
                printf("Saindo... \n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        } 
        printf("Pressione Enter para continuar...");
        getchar();
        getchar();
        system("clear");
        
    } while (opcao != 4);

    return 0;
}
