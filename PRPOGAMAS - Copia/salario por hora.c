//biblioteca
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");//passar localização
    float SalHora, HrMes, res;
    printf("informe quanto recebe por hora:\n");
    scanf("%f",&SalHora);
    printf("informe quantas horas trabalhou esse mes:\n");
    scanf("%f",&HrMes);
    res = SalHora * HrMes;
    printf("você recebeu %f esse mês", res);
    return 0;
}