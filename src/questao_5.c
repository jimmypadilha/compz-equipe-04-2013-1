/*
 ============================================================================
 Name        : questao_5.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
#define MENOR_MAX 3

void iniciar_tabela(int *tabela_hash){
	int i;
	for (i = 0; i < MAX; i++) {
		tabela_hash[i] = NULL;
	}
}

void inserir_numero(int *vetor, int *tabela_hash){
	int i, j, valor_hash_1 = 0, valor_hash_2 = 0, valor_hash_3 = 0;
	for (i = 0; i < MAX; i++) {
		valor_hash_1 = vetor[i] % MAX;
		if (tabela_hash[valor_hash_1] == NULL)
			tabela_hash[valor_hash_1] = vetor[i];
		else{
			valor_hash_2 = MENOR_MAX - (vetor[i] % MENOR_MAX) ;
			if (tabela_hash[valor_hash_2] == NULL)
				tabela_hash[valor_hash_2] = vetor[i];
			else{
				valor_hash_3 = (valor_hash_1 + valor_hash_2) % MAX;
				if (tabela_hash[valor_hash_3] == NULL)
					tabela_hash[valor_hash_3] = vetor[i];
				else{

				}
			}
		}
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
	int posicao = chave_procurada % MAX;

	if (chave_procurada == tabela_hash[posicao]){
		printf("\nNúmero encontrado");
		printf("\nPosica %d", posicao);
		return;
	}
	else{
		for (i = posicao + 1; i < MAX; i++){
			if (chave_procurada == tabela_hash[i]){
				printf("\nNúmero encontrado");
				printf("\nPosica %d", posicao);
				return;
			}
		}
		printf("\nNúmero não encontrado");
	}
}

int main(void) {

	int i;
	int chave_procurada = 17;
	int tabela_hash[MAX];
	int valor_hash = 0;
	int posicao = 0;

	int vetor[MAX] = {17, 42, 9, 33, 12};

	iniciar_tabela(tabela_hash);
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
