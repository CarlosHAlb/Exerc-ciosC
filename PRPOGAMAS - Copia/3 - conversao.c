#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int opçao;
    float Dolar, Euro, Libra, valor, conversao;
    printf("digite o valor em Reais:\n");
    printf("selecione a cédula para converção (1-3):\n");
    printf("1 - Dolar - 5,86\n");
    printf("2 - Euro - 6,38\n");
    printf("3 - Libra - 7,57\n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1:
        printf("voce escolheu Dolar\n");
        printf("digite  valor em reais:\n");
        scanf("%f", &valor);
        conversao = valor / 5.86;
        printf("o valor em dolar é: %.2f", conversao);
        break;
     
        
        case 2:
        printf("voce escolheu Euro\n");
        printf("digite o valor em reais:\n");
        scanf("%f", &valor);
        conversao = valor / 6.38;
        printf("o valor em Euro é: %.2f", conversao);
        break;
        
        case 3:
        printf("voce escolheu Libra:\n");
        printf("digite o valor em reais:\n");
        scanf("%f", &valor);
        conversao = valor / 7.57;
        printf("o valor em Libra é: %.2f", conversao);
        break;
        
        
        default:
        printf("Opção INVALIDA! Programa Encerrado");
        return 1;
     
        
        
    }
    return 0;
   
}