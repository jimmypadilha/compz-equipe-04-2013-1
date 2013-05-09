/*
 * questao_3.h
 *
 *  Created on: 26/04/2013
 *      Author: equipe-04-2013-1
 */

#ifndef QUESTAO_3_H_
#define QUESTAO_3_H_

#define tamanho 100000  //tamanho da tabela hash

/* estrutura dados*/
struct dados{
	int informacao;
	struct dados *proximo;
};
typedef struct dados Dados;
typedef Dados* Hash[tamanho];

/*** funcoes para tabela hash ***/
int funcaoHash(int numero);
void inicializaHash(Hash tabela);
void insereHash(Hash tabela, int numero);
void buscaHash(Hash tabela, int numero);
void imprimeHash(Hash tabela);
void imprimeColisao(Hash tabela, int posicao);


/** funcoes para arquivo de numeros aleatorios **/
void criarArquivo(FILE* arquivo);
void reescreverArquivo(FILE* arquivo);
void escreverArtigo(FILE* arquivo, int elemento);
int carregaArquivo(Hash tabela);

/*gera numeros aleatorios*/
void numeroAleatorio();

/* demais -- menu de opcoes e leitura de dados especificas*/
void menuHash(int *numero);
void lerNumero(int *numero);
void lerNumero2(int *numero);


#endif /* QUESTAO_3_H_ */
