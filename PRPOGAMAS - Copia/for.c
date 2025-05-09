#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, opcao;
    
    do{
        
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(i = 1;i<=n;i++){
        printf("%d\n", i);
    }
    printf("Digite 1 para continuar ou 0 para sair: ");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        system("clear");
    }
    }while (opcao != 0);
    printf("Saindo\n");
    
    return 0;
}