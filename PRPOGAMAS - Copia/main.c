//biblioteca
#include <stdio.h>
#include <locale.h>
//inicio
int main(){
    setlocale(LC_ALL,"");
    int a, b, c, d;
    printf("informe o primeiro numero:\n");
    scanf("%d",&a);
    printf("informe o segundo numero:\n");
    scanf("%d",&b);
    printf("infiorme o terceiro numero:\n");
    scanf("%d",&c);
    //processamento
    d = (a+b)/c;
    printf ("o resultado é:%d",d);
    return 0;
}