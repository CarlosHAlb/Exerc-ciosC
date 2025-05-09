#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int mes;
    printf("selecione o dia (1-12):\n");
    scanf("%d", &mes);
    
    switch(mes){
        case 1:
        printf("voce escolheu Janeiro:\n");
        break;
     
        
        case 2:
        printf("voce escolheu Fevereiro\n");
        break;
        
        case 3:
        printf("voce escolheu Março:\n");
        break;
        
        case 4:
        printf("voce escolheu Abril:\n");
        break;
        
        case 5:
        printf("voce escolheu Maio:\n");
        break;
        
        case 6:
        printf("voce escolheu Junho:\n");
        break;
       
        
        case 7:
        printf("voce escolheu Julho:\n");
        break;
        
        case 8:
        printf("voce escolheu Agosto:\n");
        break;
        
        case 9:
        printf("voce escolheu Setembro:\n");
        break;
        
        case 10:
        printf("voce escolheu Outubro:\n");
        break;
        
        case 11:
        printf("voce escolheu Novembro:\n");
        break;
        
        case 12:
        printf("voce escolheu Dezembro:\n");
        break;
        
        default:
        printf("Opção INVALIDA! Programa Encerrado");
        return 1;
     
        
        
    }
    
   
}