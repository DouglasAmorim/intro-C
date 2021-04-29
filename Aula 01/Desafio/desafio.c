#include<stdio.h>

int main() { 
	int x, y;

	printf("Entre com o valor de x: \n");
	scanf("%d ", &x);

	printf("Entre com o valor de y: \n");
	scanf("%d", &y);

	printf("O valor da multiplicacao entre %d e %d é: %d \n", x, y, x*y);
}