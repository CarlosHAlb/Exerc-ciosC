#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int operacao;
	float n1, n2, conta;

	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);

	printf("Digite o segundo numero: ");
	scanf("%f", &n2);

	printf("Selecione o operador matematico (1-4):\n");
	printf("1 - +\n");
	printf("2 - -\n");
	printf("3 - /\n");
	printf("4 - *\n");
	scanf("%d", &operacao);

	switch(operacao) {
	case 1:
		conta = n1 + n2;
		printf("Você escolheu o sinal de adicao:\n");
		printf("O resultado é %.2f", conta);
		break;

	case 2:
		conta = n1 - n2;
		printf("Você escolheu o sinal subtracao:\n");
		printf("O resultado é %.2f", conta);
		break;

	case 3:
		conta = n1 / n2;
		printf("Você escolheu o sinal de divisao:\n");
        printf("O resultado é %.2f", conta);
		break;

	case 4:
		conta = n1 * n2;
		printf("Você escolheu o sinal de multiplicacao:\n");
		printf("O resultado é %.2f", conta);
		break;

	default:
		printf("Operação Invalida! Programa Encerrado");
		return 1;
	}
	return 0;
}