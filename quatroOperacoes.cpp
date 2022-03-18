#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int adicao(int a, int b){
	int resultado;
	resultado = a + b;
	return resultado;
}

int subtracao(int c, int d){
	int resultado2;
	resultado2 = c - d;
	return resultado2;
}

float multiplicacao(float e, float f){
	float resultado3;
	resultado3 = e * f;
	return resultado3;
}

float divisao(float g, float h){
	float resultado4;
	resultado4 = g / h;
	return resultado4;
}

int main(){
	setlocale(LC_ALL, "Portuguese"); //permite o uso de acentuação e caracteres especiais no printf
	//Entrada de dados
	int num1, num2;
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);
	//contextualização e estética
	system("cls");
	printf("\n  RESULTADO DAS QUATRO OPERAÇÕES!");
	printf("\n=======================================");
	//adição
	int aux = adicao(num1,num2);
	printf("\n O resultado da adição é: %d", aux);
	//subtração
	int aux2 = subtracao(num1,num2);
	printf("\n O resultado da subtração é: %d", aux2);
	//multiplicação
	float aux3 = multiplicacao(num1,num2);
	printf("\n O resultado da multiplicação é: %.2f", aux3);
	//divisão
	float aux4 = divisao(num1,num2);
	printf("\n O resultado da divisao é: %.2f", aux4);
	printf("\n=======================================");
}
