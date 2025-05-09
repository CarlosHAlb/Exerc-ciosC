#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int opçao;
    float estação;
    printf("escolha um número (1-4):\n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1:
        printf("Você selecionou Verão\n");
        break;
     
        
        case 2:
         printf("Você selecionou Outono\n");
        break;
        
        case 3:
        printf("Você selecionou Inverno\n");
        break;
        
        case 4:
        printf("Você selecionou Primavera\n");
        break;
        
        
        
        
        default:
        printf("Opção INVALIDA! Programa Encerrado");
        return 1;
     
        
        
    }
    return 0;
   
}