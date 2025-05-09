//biblioteca
#include <stdio.h>
#include <locale.h>
int main(){
    //inicio
    setlocale(LC_ALL,"");//passar localização
    char time[20];
    int vitorias, empate, pontos;
    printf("qual o nome do time?:\n");
    scanf("%s",time);
    printf("quantas vitórias o time possui?:\n");
    scanf("%d",&vitorias);
    printf("quntos empates o time tem?:\n");
    scanf("%d",&empate);
    pontos = (vitorias*3) + (empate);
    printf("%s fez o total de %d pontos",time, pontos);
    return 0;
}