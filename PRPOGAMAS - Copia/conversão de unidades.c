#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL,"");
    int opçao;
    float n1, resultado;
    do{
        //Exibe o Menu
        printf("\n---- Conversão de Unidades ---\n");
        printf("1 - De Quilometros para Milhas\n");
        printf("2 - De Celsius para Fahrenheit\n");
        printf("3 - De Quilogramas para Libras\n");
        printf("4 - De Metros para Centímetros \n");
        printf("5 - Sair\n");
        printf("Escolha uma opçao:");
        scanf("%d", &opçao);
        
        switch(opçao){
        case 1:
            printf("Digite a distancia em Quilometros:");
            scanf("%f", &n1);
            resultado = n1 * 0.621371;
            printf("A distancia em milhas é: %.2f\n", resultado);
            break;
        
        case 2:
            printf("Digite a temoeratura em Graus Celsius:");
            scanf("%f", &n1);
            resultado = (n1 * 1.8) + 32;
            printf("A temperatura em Fahrenheits é: %.2f\n", resultado);
            break;
        
        case 3:
            printf("Digite o peso em Quilogramas:");
            scanf("%f", &n1);
            resultado = n1 * 2,20462;
            printf("O peso em Libras é: %.2f\n", resultado);
            break;
            
        case 4:
            printf("Digite a distancia em metros:");
            scanf("%f", &n1);
            resultado = n1 * 100;
            printf("A distancia em Centímetros é: %.2f\n", resultado);
            break;
        
        case 5: 
            printf("Saindo...\n");
            break;
        }
    } while (opçao != 5);
    return 0;
}