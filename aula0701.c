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
* $Log: aula0701.c,v $
* Revision 1.1  2017/05/04 15:50:39  victor.oliveira
* Initial revision
* 
*/

#include "aula0701.h"

void
MultiplicarMatrizes (float matrizA[LINHAS_A][COLUNAS_A_LINHAS_B], float matrizB[COLUNAS_A_LINHAS_B][COLUNAS_B], float matrizProduto[LINHAS_A][COLUNAS_B])
{
	unsigned linhaA, colunaB, iteracaoMultiplicacao;

	for (linhaA = 0; linhaA < LINHAS_A; linhaA++)
	{
		for (colunaB = 0; colunaB < COLUNAS_B; colunaB++)
		{
			matrizProduto[linhaA][colunaB] = 0.0;
			for (iteracaoMultiplicacao = 0; iteracaoMultiplicacao < COLUNAS_A_LINHAS_B; iteracaoMultiplicacao++)
			{	
				matrizProduto[linhaA][colunaB] += (matrizA[linhaA][iteracaoMultiplicacao] * matrizB[iteracaoMultiplicacao][colunaB]);
			}	
		}	
	}
}

/*$RCSfile*/
