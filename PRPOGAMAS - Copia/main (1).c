#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    
    //inicio
    int nascimento, pessoas, estadia, serviço, pedido;
    char nome [15], sobrenome[15], cpf[11];
    printf("Olá, seja bem vindo ao Hotel Bananas do Wilson! Iremos Realizar seu Checkin!\n");
    
    printf("Informe seu nome:\n");
    scanf("%s", nome);
    
    printf("Informe seu sobrenome:\n");
    scanf("%s", sobrenome);
    
    printf("Informe seu CPF:\n");
    scanf("%s", cpf);
    
    printf("Informe sua data de nascimento:\n");
    scanf("%d", &nascimento);
    
    printf("Qual a quantidade de pessoas que irão se hospedar?\n");
    scanf("%s", pessoas);
    
    return 0;
}