/*
 ============================================================================
 Name        : questao_3.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(void) {

	int i;
	//int vetor[MAX];
	int chave_procurada = 12;
	int tabela_hash[MAX];
	int valor_hash;

	/* Vetor de números */
	int vetor[MAX] = {17, 42, 9, 33, 12};

	/* Gera número aleatório */
	/*
	for (i = 0; i < MAX; i++) {
		vetor[i] = rand();
	}
	*/

	/* Imprime números gerados */
	/*
	printf("Números gerados:\n[");
	for (i = 0; i < MAX; i++){
		printf("%d ", vetor[i]);
	}
	printf("]\n");
	*/

	/* Cálculo do valor hash */
	/*int valor_hash = (580625685 % 701) + 1;

	printf("Valor hash: %d", valor_hash);
	printf("\nChave do elemento do vetor: %d", vetor[valor_hash]);
	*/

	/* Inserindo um novo registro */
	for (i = 0; i < MAX; i++) {
		valor_hash = (vetor[i] % 701) + 1;
		//printf("%d", valor_hash); 18 43 10 34 13
		//printf("\n");
		tabela_hash[valor_hash] = vetor[i];
	}

	/* Imprime números gerados */
	printf("Tabela hash:\n[");
	for (i = 0; i < 50; i++){
		if (tabela_hash[i] != "")
			printf("%d ", tabela_hash[i]);
	}
	printf("]\n");

	/* Procurando uma chave */
	valor_hash = (chave_procurada % 701) + 1;
	for (i = valor_hash;  i < MAX; i++) {
		if (chave_procurada == tabela_hash[i])
			printf("\nNúmero encontrado");
		else
			printf("\nNúmero não encontrado");
	}


	return EXIT_SUCCESS;
}
