/*
 ============================================================================
 Name        : questao_2.c
 Author      : equipe-04-2013-1
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *fp;
	size_t tamanho = 100;
	char *linha = malloc(tamanho);
	fp = fopen ("teste.txt", "r");
	if (fp == NULL) {
		printf ("Houve um erro ao abrir o arquivo.\n");
		return 1;
	} else{
		while (getline(&linha, &len, fp) > 0)
		{
			printf("%s", linha);
		}
		if (linha) free(linha);
		fclose (fp);
		return 0;
	}
}
