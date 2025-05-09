#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float tam, vel, temp;
    printf("digite o tamanho do arquivo para download (MB):");
    scanf("%f",&tam);
    printf("digite a velocidade da internet (Mbps)");
    scanf("%f",&vel);
    temp = (tam * 8) / vel;
    temp = temp / 60;
    printf("tempo aproximado de %.2f minutos\n", temp);
    return 0;
} 