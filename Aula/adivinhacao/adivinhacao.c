#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main() { 
	printf("***********************\n");
	printf("bem vindo a essa budega\n");
	printf("***********************\n\n");

	int segundos = time(0);
	srand(segundos);
	int numeroAleatorio =  rand();

	int numeroSecreto = numeroAleatorio % 100;
	// Só usar depois de iniciarlizar
	int chute;
	
	int ganhou = 0;
	int tentativa = 1;

	float pontos = 1000.0;

	int nivel = 0;
	printf("Qual o nível de dificuldade? \n");
	printf("(0) Fácil (1) Médio (2) Dificil\n\n");
	printf("Escolha: \n");
	scanf("%d", &nivel);

	int numeroTentativas = 0;

	switch(nivel) {
		case 0:
			numeroTentativas = 20;
			break;
		case 1:
			numeroTentativas = 10;
			break;
		default: 
			numeroTentativas = 5;
			break;
	}

	for(int i = 0; i  < numeroTentativas; i++) {
	// while(!ganhou) {
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
		float pontosPerdidos;

		if (ganhou) {
			break;
		} else if (maior) {
			printf("Infelizmente voce errou \n");
			printf("Seu chute foi maior que o numero secreto \n\n");
			
		} else { 
			printf("Infelizmente voce errou \n");
			printf("Seu chute foi menor que o numero secreto \n\n");
		}

		pontosPerdidos = abs((double)(chute - numeroSecreto) / (double)2);

		pontos = pontos - pontosPerdidos;
		tentativa++;
		
	}

	if (ganhou) {
		printf("Voce Ganhou \n");
		printf("Parabens voce acertou em %d tentativas! \n\n",tentativa);
		printf("Você fez %.1f pontos\n", pontos);
	} else {
		printf("Voce perdeu \n");
	}

	printf("Fim de Jogo\n");
}