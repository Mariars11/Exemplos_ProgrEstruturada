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
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);
	//contextualiza��o e est�tica
	system("cls");
	printf("\n  RESULTADO DAS QUATRO OPERA��ES!");
	printf("\n=======================================");
	//adi��o
	int aux = adicao(num1,num2);
	printf("\n O resultado da adi��o �: %d", aux);
	//subtra��o
	int aux2 = subtracao(num1,num2);
	printf("\n O resultado da subtra��o �: %d", aux2);
	//multiplica��o
	float aux3 = multiplicacao(num1,num2);
	printf("\n O resultado da multiplica��o �: %.2f", aux3);
	//divis�o
	float aux4 = divisao(num1,num2);
	printf("\n O resultado da divisao �: %.2f", aux4);
	printf("\n=======================================");
}
