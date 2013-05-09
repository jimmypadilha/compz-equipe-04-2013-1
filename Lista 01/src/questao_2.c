/*
 ============================================================================
 Name        : questao_2.c
 Author      : equipe-04-2013-1
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : validator de endereço de email
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#define EXPR_REG ".+@.+\\.[a-z]+"
#define TRUE 1
#define FALSE 0
int VerificaEmail(char linha[100]){
	regex_t reg;
	if(regcomp(&reg,EXPR_REG,REG_EXTENDED|REG_NOSUB) != 0)
		return 0;
	else
	{
		if(regexec(&reg, linha, 0,(regmatch_t *)NULL,0) == 0)
			return 1;
		else
			return 0;
	}
}
int main(int argc, char *argv[])
{

	FILE *entrada, *saida;
size_t len = 100;
char *linha = malloc(len);
entrada = fopen (argv[1], "r");
saida = fopen(argv[2],"w");
if (entrada == NULL) {
printf ("Houve um erro ao abrir o arquivo.\n");
return 1;
}
else{
	while (getline(&linha, &len, entrada) > 0){
		if(VerificaEmail(linha) == 1) {
			printf("\n E-mail valido!\n");
			fprintf(saida, "%s", "valido");
		}
		else {
			printf("\n E-mail invalido!\n");
			fprintf(saida, "%s", "invalido");
		}
	}
	if (linha) free(linha);
	fclose (entrada);
	fclose(saida);

	return 0;
}

}
