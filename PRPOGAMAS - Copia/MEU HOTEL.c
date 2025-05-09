//biblioteca
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	
// inicio
	int checkin, tempo, qnt_pessoas, serviço, opcao, pedido;
	char nome [20], cpf [15];
	
	do{
	
	//Checkin
	printf ("Olá, sejam bem vindos ao hotel, Golden Star!, vamos realizar seu checkin.\n ");
	printf("Informe o seu primeiro nome, por favor.\n");
	scanf ("%s", nome);
    printf("Informe o seu sobrenome.\n");
	scanf ("%s", nome);
	printf ("Qual sua data de nascimento?\n");
	scanf ("%d", &checkin);
	printf("Qual seu cpf?\n");
	scanf("%s", cpf);
	printf ("Deseja fazer uma rezerva para quantas pessoas?\n");
	scanf ("%d",&qnt_pessoas);
	printf ("Quanto tempo deseja ficar?\n");
	scanf ("%d", &tempo);
	printf ("Checkin conluído, aproveite a estadia!\n");
	
	//Serviços
	printf ("Selecione um serviço: \n");
	printf ("1 - Serviço de quarto\n");
	printf ("2- Fazer um pedido\n");
	scanf ("%d", &opcao);
	
	switch (opcao){
	    case 1:
	    printf ("Você escolheu: Serviço de Quarto!\n");
	    printf ("Informe qual serviço você deseja:\n");
	    printf ("1 - Arrumar a cama\n");
	    printf ("2 - Limpeza\n");
	    printf ("3 - Recolher o lixo\n");
	    scanf ("%d", &opcao);
	    printf ("A moça está a caminho para realizar o serviço, aguarde alguns minutos...\n");
	    printf ("Esperamos que você tenha ficado satisfeito vom o nosso serviço! Se precisar de mais alguma coisa é só nos informar.\n");
	    break;
	    
	    case 2: 
	    printf ("Você escolheu: Fazer um pedido!\n");
	    printf ("Informe qual pedido você deseja:\n");
	    printf ("1 - Café da Manhã\n");
	    printf ("2 - Almoço\n");
	    printf ("3 - Janta\n");
	    scanf ("%d", &opcao);
	    printf ("A comida está sendo preparada, aguarde alguns minutos...\n");
	    printf ("Gostaram da comida? Esperamos que sim, se precisar de mais alguma coisa é só nos informar.\n");
	    break;
	}
	    printf("Digite 1 para continuar ou 2 para sair\n");
        scanf("%d", &opcao);
	}while (opcao == 1);
	
return 0;
}