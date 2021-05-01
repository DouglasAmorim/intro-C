#include <stdio.h>

int main() { 
	int numero = 0;

	printf("Entre com um numero inteiro\n");
	scanf("%d", &numero);

	for(int i = 1; i <= 10; i++) {
		int tabuada = numero * i;
		printf("%d X %d = %d\n", numero, i, tabuada);
	}
}