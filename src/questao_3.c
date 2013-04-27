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
#include <time.h>
#include "questao_3.h"


/*  recebe como parametro uma variavel inteira,
 *  retorna o resto da divisao desse numero pelo tamanho da tabela*/
int funcaoHash(int numero){
	return(numero%tamanho);
}

/*inicializaHash recebe uma como parametro uma variavel do tipo hash
 * definida em .h,todas as posicoes da tabela se tornam nulas*/

void inicializaHash(Hash tabela){
	int i;
	for(i=0;i<tamanho;i++){
		tabela[i] = NULL;
	}
}

/*recebe como parametro uma variavel do tipo hash e outro do tipo numero
 * . Insere os elementos  na tabela atraves da tabela funcao hash e caso
 * a posicao ja esteja ocupada, como colisao estamos usando encadeamento direto*/

void insereHash(Hash tabela, int numero){
	int chave = funcaoHash(numero);
	Dados *aux = tabela[chave];
	while(aux != NULL){
		if(aux->informacao == numero){
			break;
		}
		aux = aux->proximo;
	}
	if(aux == NULL){
		aux = (Dados*)malloc(sizeof(Dados));
		aux->informacao = numero;
		aux->proximo = tabela[chave];
		tabela[chave] = aux;
	}
}

/*recebe dois parametros, a tabela do tipo hash e um inteiro.
 * A variavel tabela tem o objetivo passar a tabela e a variavel numero
 * tem como objetivo determinar  a posicao  da tabela  que o usuario deseja visualizar*/
void buscaHash(Hash tabela, int numero){
	int posicao = numero;
	if(numero > tamanho || numero<0){
		printf("Posicao nao encontrada");
		return;
	}else{
		imprimeColisao(tabela,posicao);
	}
}

/*mostra uma posicao e todas as suas colisoes*/
void imprimeColisao(Hash tabela,int posicao){
	Dados* aux = tabela[posicao];
	if(aux == NULL){
		printf("posicao vazia");
		return;
	}else{
		if(aux != NULL){
			printf("%d",aux->informacao);
			while(aux->proximo != NULL){
				printf("-> %d", aux->proximo->informacao);
				aux = aux->proximo;
			}
		}
	}

}
/* Imprimir todos os elementos da variavel do tipo hash*/
void imprimeHash(Hash tabela){
	int i = 0;
//	int cont = 0;

	for(i=0;i<tamanho;i++){
		if(tabela[i] != NULL){
			printf("\n %d",tabela[i]->informacao);
			Dados* aux = tabela[i]->proximo;
			while(aux != NULL){
				printf("-> %d", aux->informacao);
				aux = aux->proximo;
			}
		}
	}
}

/*Criar arquivo que sera usado como recipiente dos numeros aleatorios*/
void criarArquivo(FILE *arquivo){
	arquivo = fopen("tabelaHash.txt","r");
	if(arquivo != NULL){
		arquivo  = fopen("tabelaHash.txt", "w");
		fclose(arquivo);
	}else{
		return;
	}
}
/*Elimina o arquivo criado*/
void reescreverArquivo(FILE* arquivo){
	arquivo = fopen("tabelaHash.txt","w");
	fclose(arquivo);
}

/*Elementos sao guardados no arquivo*/
void escreverArquivo(FILE* arquivo, int elemento){
	arquivo = fopen("tabelaHash.txt", "a");
	fprintf(arquivo,"%d\n",elemento);
	fclose(arquivo);
}
/*Inserir na tabela hash os elementos do arquivo*/
int carregarArquivo(Hash tabela){

	int elemento;
	FILE* arquivo;
	arquivo = fopen("tabelaHash.txt","r");
	fseek(arquivo,0,SEEK_END);
	if(ftell(arquivo) == 0){
		return 0;
	}
	fseek(arquivo,0,SEEK_SET);
	if(arquivo == NULL){
		return 0;
	}else{
		while(!feof(arquivo)){
			fscanf(arquivo,"%d",&elemento);
			insereHash(tabela,elemento);
		}
		system("cls");
	}
	fclose(arquivo);
	return 1;
}

/*O procedimento numeroAleatorio gera 675 numeros no
 * intervalo 2000 >= X <= 8200 e os armazena no arquivo*/
void numeroAleatorio(){

	int cont = 0;
	int numero;
	FILE* arquivo;
	srand(time(NULL));

	while(cont != 675){
		numero = (rand()%6200)+2000;
		escreverArquivo(arquivo,numero);
		cont++;
	}
}

void lerNumero(int *numero){
	system("cls");
	 printf("\nDigite a posicao do elemento que deseja verificar = ");
	 scanf("%d",numero);
}
void lerNumero2(int *numero)
{
 system("cls");
 printf("Digite a posicao que desejar verificar = ");
 scanf("%d",numero);
}

void menuHash(int *numero){
	printf("1 ----  Gerar Numeros Aleatorios\n");
	printf("2 ----  Inserir os numeros aleatorios\n");
	printf("3 ----  Buscar Chave\n");
	printf("4 ----  Imprimir Hash\n");
	printf("5 ----  Imprimir Colisao\n");
	printf("6 ----  Sair\n");
	printf("Digite uma Opcao:");
	scanf("%d", numero);
}

int main(void) {
	Hash tabela;
	int numero,elemento,op,cont = 0, conti = 0;
	FILE* arquivo;

	 while(numero != 8){
		menuHash(&numero);
		switch(numero){
			case 1:
				if(cont>0){
					system("cls");
					printf("numeros aleatorios ja gerados\n");
				}else{
					cont++;
					inicializaHash(tabela);
					reescreverArquivo(arquivo);
					numeroAleatorio();
				}break;
			case 2:
				if(cont>0){
					conti++;
					carregarArquivo(tabela);

				}else{
					printf("");
				}break;
			case 3:
				if(conti>0){
					system("cls");
					lerNumero(&elemento);
					buscaHash(tabela,elemento);

				}else{
					printf("ddd");
				}break;
			case 4:
				if(conti>0){
					system("cls");
					imprimeHash(tabela);
				}else{
					printf("dsdsd");
				}break;
			case 5:
				 system("cls");
				    lerNumero2(&op);
				    imprimeColisao(tabela,op);
				    break;
			case 6:
				 exit(0);
			default:
				 system("cls");
				 printf("\nOpcao invalida!\n");
				break;
		}
	}

	return EXIT_SUCCESS;
}



