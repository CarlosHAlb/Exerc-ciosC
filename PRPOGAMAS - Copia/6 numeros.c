#include <stdio.h>

int main() {
    int numeros[6], soma = 0;
    int i;
    
    printf("digite os 6 numeros: \n");
    
for(i = 0;i < 6; i++){
    scanf("%d", &numeros[i]);
    soma += numeros[i];
}

printf("soma dos numeros: %d\n", soma);

return 0;
}