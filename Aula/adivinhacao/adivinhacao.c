#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() { 
	printf("***********************\n");
	printf("bem vindo a essa budega\n");
	printf("***********************\n\n");

	int numeroSecreto = 42;
	int chute;
	int ganhou = 0;
	int tentativa = 1;

	// for(int i = 0; i  < NUMERO_DE_TENTATIVAS; i++) {
	while(!ganhou) {
		printf("Tentativa %d \n", tentativa);

		printf("Qual seu palpite? \n");
		scanf("%d", &chute);

		if (chute < 0) {
			printf("Voce não pode chutar numeros negativos\n");
			continue;
		} 

		ganhou = chute == numeroSecreto;

		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;

		printf("Seu chute foi %d\n", chute);

		if (ganhou) {
			printf("Parabens voce acertou em %d tentativas! \n\n",tentativa);
		} else if (maior) {
			printf("Infelizmente voce errou \n");
			printf("Seu chute foi maior que o numero secreto \n\n");
		} else { 
			printf("Infelizmente voce errou \n");
			printf("Seu chute foi menor que o numero secreto \n\n");
		}

		tentativa++;
		
	}

	printf("Fim de Jogo\n");
}