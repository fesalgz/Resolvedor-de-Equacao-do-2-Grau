//incluindo as bibliotecas de i/o e math
#include <stdio.h>
#include <math.h>

//criando a fun��o para fazer a formula de bascara
int bascara (int a, int b, int c) {
	
	//declarando variavel 
	int result;
	//fazendo a formula de bascara
	result = pow(b,2) - (4*a*c);
	//retornando o resultado
	return result;
}

int main() {
	
	//declarando as variaveis que irei usar
	int a ,b ,c ,x1 ,x2 ,basc = 0;
	
	//prints e scans
	printf("====================================\n");
	printf("Bem vindo ao App de Conta de 2 grau!\n");
	printf("====================================\n\n");
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	printf("Insira o valor de C: ");
	scanf("%d", &c);
	
	//puxando o resultado da funcao
	basc = bascara(a,b,c);
	
	//calculando x1 e x2
	x1 = (-b - (sqrt(basc))) / (2*a);
	x2 = (-b + (sqrt(basc))) / (2*a); 
	
	//printando o resultado
	printf("O valor de X1 eh = %d\n", x1);
	printf("O valor de X2 eh = %d\n", x2);
	
	system("pause");

	return 0;
}