# Revição da linguagem C
Estudos dos módulos introdutórios ao C do curso: "C I: Introdução à Linguagem das Linguagens" da Alura.
Link para as aulas:  [Alura](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-1 "Cursos Alura")

## Assuntos revisados nesse curso: 
Assustos tratados nessa revisão: 
- printf/scanf
~~~C
	printf("Qual seu palpite? \n");
	scanf("%d", &chute);
~~~

- if/else
~~~C
	if (maior) {
		printf("Infelizmente voce errou \n");
		printf("Seu chute foi maior que o numero secreto \n\n");
	} else { 
		printf("Infelizmente voce errou \n");
		printf("Seu chute foi menor que o numero secreto \n\n");
	}
~~~
- estruturas de repetição
~~~C
	for(int i = 0; i  < NUMERO_DE_TENTATIVAS; i++) {
	[...]
	}
	while(!ganhou) {
	[...]
	}
~~~
- defines
~~~C
	#define NUMERO_DE_TENTATIVAS 5
~~~
- break/continue
~~~C
	if (chute < 0) {
		printf("Voce não pode chutar numeros negativos\n");
		continue;
	}
	[...]
	if (ganhou) {
		printf("Parabens voce acertou em %d tentativas! \n\n",tentativa);
		break;
	} 
~~~
- 1 == true / 0 == false
~~~C
	while(numero == 0) {
		[...]
	}

	while(numero == 1) {
		[...]
	}
~~~

- Cating
~~~C
	int a = 3;
	int b = 2;

	// CAST
	double pontos = a / (double)b;
~~~
- Abs (valor absoluto)
~~~C
	#include<stdlib.h>
	int a = 3;
	int b = -3;

	// CAST
	int result = abs(a * b);
~~~
- rand
~~~C
	#include<stdlib.h>
	int n1 = rand();
	int n2 = rand();

	// CAST
	printf("%d %d\n", n1, n2);
~~~
- resto de divisão (para limitar o tamanho do numero)
~~~C
	#include<stdlib.h>
	int numeroAleatorio = rand();
	int numeroSecreto = numeroAleatorio % 100;
~~~
- função time
~~~C
	int segundos = time(0);
	srand(segundos);
	int numeroAleatorio =  rand();
~~~

### Revisão da linguagem Markdown
*Refazer o MD desse readme*
Guia basico de uso de [MarkDown](https://docs.pipz.com/central-de-ajuda/learning-center/guia-basico-de-markdown#open "guia")