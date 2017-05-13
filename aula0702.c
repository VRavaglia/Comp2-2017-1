/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 15:50:39 $
* $Log: aula0702.c,v $
* Revision 1.1  2017/05/04 15:50:39  victor.oliveira
* Initial revision
*
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0701.h"

#define NUMERO_ARGUMENTOS 28 
#define EOS '\0'

#define OK 0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define ARGUMENTOS_INVALIDOS 2

int
main (int argc, char *argv[])
{
	char *validacao;
	float matrizA[LINHAS_A][COLUNAS_A_LINHAS_B], matrizB[COLUNAS_A_LINHAS_B][COLUNAS_B], matrizProduto[LINHAS_A][COLUNAS_B];
	unsigned linha, coluna, numeroArgumento, indice;

    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}	
	
	for (indice = 1; indice < argc; indice ++)
	{	
		strtof(argv[indice], &validacao);
		if (*validacao != EOS) 
		{	
			printf("\nArgumento #%i invalido, \nUso: <float>\n\n", indice);
			exit(ARGUMENTOS_INVALIDOS);
		}	
	}	
	
	numeroArgumento = 1;
	
	for (linha = 0; linha < LINHAS_A; linha++)
	{
		for (coluna = 0; coluna < COLUNAS_A_LINHAS_B; coluna++)
		{
			matrizA[linha][coluna] = strtof(argv[numeroArgumento], &validacao);
			numeroArgumento++;	
		}
	}

	for (linha = 0; linha < COLUNAS_A_LINHAS_B; linha++)
	{
		for (coluna = 0; coluna < COLUNAS_B; coluna++)
		{
			matrizB[linha][coluna] = strtof(argv[numeroArgumento], &validacao);
			numeroArgumento++;	
		}
	}

	MultiplicarMatrizes(matrizA, matrizB, matrizProduto);

	system("clear");
	
	for (linha = 0; linha < LINHAS_A; linha++)
	{
		printf("\n");
		for (coluna = 0; coluna < COLUNAS_B; coluna++)
		{
			printf("%.01f ", matrizProduto[linha][coluna]);	
		}
	}

	printf("\n\n");

    return OK;
}	

/*$RCSfile*/
