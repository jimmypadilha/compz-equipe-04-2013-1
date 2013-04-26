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

void procurar_valor(int chave_procurada, int *tabela_hash){
	int i;
	int posicao = posicao = chave_procurada % 7;

	for (i = posicao; i < MAX; i++){
		if (chave_procurada == tabela_hash[i])
			printf("\nNúmero encontrado");
		else
			printf("\nNúmero não encontrado");
	}
}

int main(void) {

	int i;
	int chave_procurada = 12;
	int tabela_hash[MAX];
	int valor_hash = 0;
	int posicao = 0;

	/* Vetor de números */
	int vetor[MAX] = {17, 42, 9, 33, 12};

	inserir_numero(vetor, tabela_hash);
	imprimir_tabela(tabela_hash);
	procurar_valor(chave_procurada, tabela_hash);

	/* Gera número aleatório */
	/*
	for (i = 0; i < MAX; i++) {
		vetor[i] = rand();
	}
	*/

	return EXIT_SUCCESS;
}
