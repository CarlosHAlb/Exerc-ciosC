//biblioteca
#include <stdio.h>
#include <locale.h>
//inicio
int main (){
    setlocale(LC_ALL,""); //passar localização
    int caminhões, alqueires, viagens;
    printf("informe o numero de caminhões:\n");
    scanf("%d",&caminhões);
    printf("informe o numero de alqueires:\n");
    scanf("%d", &alqueires);
    viagens =( 250 * alqueires)/(18 * caminhões);
    printf ("serão  necessarios %d viagens", viagens);
    return 0;
    }