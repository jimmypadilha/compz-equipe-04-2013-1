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

	/* Tabela hash */
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

	/* Cálculo da chave */
	int valor = 580625685 % 701;
	int chave = valor + 1;


	printf("Chave: %d", chave);
	printf("\nValor da chave: %d", vetor[chave]);

	return EXIT_SUCCESS;
}
