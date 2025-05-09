#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int dia;
    float n1, n2, n3, n4, media;
    printf("selecione o dia (1-7):\n");
    scanf("%d", &dia);
    
    switch(dia){
        case 1:
        printf("voce escolheu domingo:\n");
        printf("se prepare para trabalhar amanha :(");
        break;
     
        
        case 2:
        printf("voce escolheu segunda - feira:\n");
        printf("acorda que voltamos a rotina diaria");
        break;
        
        case 3:
        printf("voce escolheu terça - feira:\n");
        printf("ainda temos um bom caminho");
        break;
        
        case 4:
        printf("voce escolheu quarta - feira:\n");
        printf("meio da semana, dia chato :(");
        break;
        
        case 5:
        printf("voce escolheu quinta - feira:\n");
        printf("Estamos quase no fim de semana");
        break;
        
        case 6:
        printf("voce escolheu sexta - feira:\n");
        printf("Sextou com S de saudade do churras");
        break;
       
        
        case 7:
        printf("voce escolheu sábado:\n");
        printf("Hoje é sábado, bom fim de semana :)");
        break;
     
        
        
    }
    
   
}