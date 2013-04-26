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

int main(void) {

	/* Tabela hash */
	int vetor[5] = {17, 42, 9, 33, 12};

	/* Cálculo da chave */
	int valor = 580625685 % 701;
	int chave = valor + 1;


	printf("Chave: %d", chave);
	printf("\nValor da chave: %d", vetor[chave]);

	return EXIT_SUCCESS;
}
