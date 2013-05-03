/*
 ============================================================================
 Name        : questao_1.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description : Partição
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void imprimir_conjunto(int n){

	int i;

	printf("A = {");

	for (i = 1; i <= n; i++) {
		if (i < n)
			printf("%d, ", i);
		else
			printf("%d", i);
	}

	printf("}");
}


void particao(int n){

	int i, j;

	printf("\nP(A)={");

	for (i = 1; i <= n; i++) {
		printf("{%d}, ", i);
	}

	for (i = 1; i <= n; i++) {
		for (j = i+1; j <= n; j++) {
			printf("{%d, %d}, ", i, j);
		}
	}
	printf("{");

	for (i = 1; i <= n; i++) {
		if (i < n)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	printf("}}\n");
}


int main(void) {
	int n = 0;
	int i, j;

	printf("Informe o valor n da partição: ");
	scanf("%d", &n);

	imprimir_conjunto(n);
	particao(n);

	return EXIT_SUCCESS;
}








