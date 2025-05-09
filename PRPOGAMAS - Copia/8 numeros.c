#include <stdio.h>

int main() {
    int n[8], par = 0, impar = 0;
    
    printf("digite 8 numeros: \n");
    for( int i = 0; i < 8; i++){
        scanf("%d", &n[i]);
        
        if(n[i] % 2 == 0){
            par++;
    }
    else {
        impar++;
    }
    }
printf("par:%d\n", par);
printf("impar:%d\n", impar);

return 0;
}