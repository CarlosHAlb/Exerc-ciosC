#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int opçao;
    float n1, n2, n3, n4, media;
    printf("selecione a materia (1-4):\n");
    printf("1 - portugues\n");
    printf("2 - matematica\n");
    printf("3 - biologia\n");
    printf("4 - ciência\n");
    scanf("%d", &opçao);
    
    switch(opçao){
        case 1:
        printf("voce escolheu portugues:\n");
        printf("digite as quatro notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 2:
        printf("voce escolheu matematica:\n");
        printf("digite as quatro notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 3:
        printf("voce escolheu biologia:\n");
        printf("digite as quatro notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        case 4:
        printf("voce escolheu ciência:\n");
        printf("digite as quatro notas: ");
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        break;
        
        default:
        printf("Opção Invalida! Programa Encerrado");
        return 1;
    }
    
    media = (n1+n2+n3+n4) / 4,0;
    
    printf("sua media final: %.2f", media);
    
    if(media>=9.0)
    {
        printf("conceito A");
        printf("status: aprovado");
    }
    else if(media>=7.5)
    {
        printf("conceito B\n");
        printf("aprovado");
    }
    else if(media>=6.0)
    {
        printf("conceito C\n");
        printf("aprovado");
    }
    else if(media>=4.0)
    {
        printf("conceito D\n");
        printf("reprovado");
    }
    else
    {
        printf("conceito E\n");
        printf("reprovado =(");
    }
    return 0;
    
    
}