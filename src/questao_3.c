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

void inserir_numero(int *vetor, int *tabela_hash){
	int i, valor_hash = 0;
	for (i = 0; i < MAX; i++) {
		valor_hash = vetor[i] % 7;
		tabela_hash[valor_hash] = vetor[i];
	}
}

void imprimir_tabela(int *vetor){
	int i;
	printf("Números gerados:\n[");
	for (i = 0; i < MAX; i++){
		printf("%d ", vetor[i]);
	}
	printf("]\n");
}

int main(void) {

	int i;
	int chave_procurada = 12;
	int tabela_hash[MAX];
	int valor_hash = 0;

	/* Vetor de números */
	int vetor[MAX] = {17, 42, 9, 33, 12};

	inserir_numero(vetor, tabela_hash);
	imprimir_tabela(tabela_hash);

	/* Gera número aleatório */
	/*
	for (i = 0; i < MAX; i++) {
		vetor[i] = rand();
	}
	*/

	/* Procurando uma chave */
	/*
	valor_hash = (chave_procurada % 7) + 1;
	for (i = valor_hash;  i < MAX; i++) {
		if (chave_procurada == tabela_hash[i])
			printf("\nNúmero encontrado");
		else
			printf("\nNúmero não encontrado");
	}
	*/

	return EXIT_SUCCESS;
}
