#include<stdio.h>

int main() {
	int numero = 1;
	int soma = 0;
	while(numero <= 100) {
		soma = soma + numero;
		
		printf("soma = %d \n", soma);

		numero++;
	}
}