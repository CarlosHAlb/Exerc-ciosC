#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int opçao;
    float p1, p2, p3, p4, p5;
    printf("selecione a rerfeição (1-5):\n");
    printf("1 - X-Burguer\n");
    printf("2 - X-Salada\n");
    printf("3 - X-Bacon\n");
    printf("4 - Hot Dog\n");
    printf("5 - Refrigerante\n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1:
        printf("voce escolheu X-Burguer:\n");
        printf("O valor é de R$10");
        break;
        
        case 2:
        printf("voce escolheu X-Salada:\n");
        printf("O valor é de R$12");
        break;
        
        case 3:
        printf("voce escolheu X-Bacon:\n");
        printf("O valor é de R$15");
        break;
        
        case 4:
        printf("voce escolheu Hot Dog:\n");
        printf("O valor é de R$8");
        break;
        
        case 5:
        printf("voce escolheu Refrigerante:\n");
        printf("O valor é de R$5");
        break;
        
        
        default:
        printf("Opção Invalida! Programa Encerrado");
        return 1;
    }
    return 0;
}