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


int main(void) {
	int n = 0;
	int i, j;

	printf("Informe o valor n da partição: ");
	scanf("%d", &n);

	printf("A = {");

	for (i = 1; i <= n; i++) {
		if (i < n)
			printf("%d, ", i);
		else
			printf("%d", i);
	}

	printf("}");

	printf("\nP(A)={");

	/* Imprime os numeros sozinhos */


	/* Imprime os pares de numeros */




	/* Imprime todos os numeros juntos */
	for (i = 1; i <= n; i++) {
		if (i < n)
			printf("%d, ", i);
		else
			printf("%d", i);
	}

	printf("}}");

	return EXIT_SUCCESS;
}*/
