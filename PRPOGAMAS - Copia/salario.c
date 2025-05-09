//biblioteca
#include <stdio.h>
#include <locale.h>
int main(){
    //inicio
    setlocale(LC_ALL,""); //passar localização
    char nome[20];
    float sal, reajuste, novoSal;
    printf("digite o seu nome:\n");
    scanf("%s",nome);
    printf("digite o seu salario:\n");
    scanf("%f",&sal);
    printf("digite o percentual de reajuste:\n");
    scanf("%f",&reajuste);
    novoSal = sal+sal * reajuste / 100;
    printf("%s seu salario reajustado é de %.2f",nome, novoSal);
    return 0;
}