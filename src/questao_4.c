/*
 ============================================================================
 Name        : questao_4.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100000
#define M 7

void gerar_numero(int *vetor){
	int i;
	for (i = 0; i < MAX; i++) {
		vetor[i] = rand() % 1000000;
	}
}

void iniciar_tabela(int *tabela_hash){
	int i;
	for (i = 0; i < MAX; i++) {
		tabela_hash[i] = NULL;
	}
}

void inserir_numero(int *vetor, int *tabela_hash){
	int i, j, valor_hash = 0;
	for (i = 0; i < MAX; i++) {
		valor_hash = vetor[i] % MAX;
		if (tabela_hash[valor_hash] == NULL)
			tabela_hash[valor_hash] = vetor[i];
		else{
			for (j = valor_hash + 1; j < MAX; j++){
				if (tabela_hash[j] == NULL){
					tabela_hash[j] = vetor[i];
					break;
				}
			}
			for (j = 0; j < valor_hash; j++){
				if (tabela_hash[j] == NULL){
					tabela_hash[j] = vetor[i];
					break;
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
	}
	else{
		for (i = posicao + 1; i < MAX; i++){
			if (chave_procurada == tabela_hash[i]){
				printf("\nNúmero encontrado\n");
				break;
			}
		}
		for (i = 0; i < posicao; i++){
			if (chave_procurada == tabela_hash[i]){
				printf("\nNúmero encontrado\n");
				break;
			}
		}
		printf("\nNúmero não encontrado\n");
	}
}

int main(void) {
	int chave_procurada;
	int tabela_hash[MAX];
	int vetor[MAX];

	printf("Informe o valor a ser pesquisado: ");
	scanf("%d", &chave_procurada);

	gerar_numero(vetor);
	iniciar_tabela(tabela_hash);
	inserir_numero(vetor, tabela_hash);
	imprimir_tabela(tabela_hash);
	procurar_valor(chave_procurada, tabela_hash);

	return EXIT_SUCCESS;
}
