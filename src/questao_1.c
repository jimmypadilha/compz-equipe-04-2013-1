/*
 ============================================================================
 Name        : questao_1.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	int i;

	printf("Informe o valor n da partição: ");
	scanf("%d", &n);
	printf("{");

	for (i = 1; i <= n; i++) {
		if (i < n)
			printf("%d, ", i);
		else
			printf("%d", i);
	}

	printf("}");


	return EXIT_SUCCESS;
}
