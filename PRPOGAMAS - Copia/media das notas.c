//biblioteca
#include <stdio.h>
#include <locale.h>
//inicio
int main(){
    setlocale(LC_ALL,"");
    int n1, n2, n3, n4, res;
    printf("informe a primeira nota:\n");
    scanf("%d",&n1);
    printf("informe a segunda nota:\n");
    scanf("%d",&n2);
    printf("informe a terceira nota:\n");
    scanf("%d",&n3);
    printf("informe a quarta nota:\n");
    scanf("%d",&n4);
    res = (n1+n2+n3+n4) / 4;
    printf("a media de suas notas são %d", res);
    return 0;
}