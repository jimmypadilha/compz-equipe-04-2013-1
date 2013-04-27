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

int main(int argc, char *argv[]) {

	FILE *entrada, *saida;
	size_t len = 100;
	char *linha = malloc(len);
	entrada = fopen (argv[1], "r");
	saida = fopen(argv[2],"w");
	if (entrada == NULL) {
		printf ("Houve um erro ao abrir o arquivo.\n");
		return 1;
	} else{
		while (getline(&linha, &len, entrada) > 0)
		{
			fprintf(saida, "%s", linha);
		}
		if (linha) free(linha);
		fclose (entrada);
		fclose(saida);
		return 0;
	}
}
