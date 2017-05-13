/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: mncd- $
* $Date: 2017/04/21 02:25:50 $
* $Log: aula0601.c,v $
* Revision 1.1  2017/04/21 02:25:50  mncd-
* Initial revision
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "aula0601.h"

tipoErros
MostrarMonitor (tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas)
{
	unsigned linha, coluna;
	
    if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return dimensoesInvalidas;
	
	system("clear");

	for (linha = 0; linha < maximoLinhas; linha++)
	{
		printf("\n");
		for (coluna = 0; coluna < maximoColunas; coluna++)
		{
			printf("%c", monitor[linha][coluna] == aceso ? ACESO : APAGADO); 
		}	
	}
    
    printf("\n");

    sleep(1);

	return ok;
}

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas)
{
		
	unsigned linha, coluna;

	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return dimensoesInvalidas;

	for (linha = 0; linha < maximoLinhas; linha++)
	{
		for (coluna = 0; coluna < maximoColunas; coluna++)
		{
			monitor[linha][coluna] = apagado;
		}	
	}
	
	MostrarMonitor(monitor, maximoLinhas, maximoColunas);

	return ok;
}

tipoErros
DesenharRetangulo (tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned ordenadaEsquerda, unsigned abscissaEsquerda, unsigned ordenadaDireita, unsigned abscissaDireita)
{
	
	unsigned horizontal, vertical;

	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return dimensoesInvalidas;

	if (ordenadaDireita > maximoLinhas)
		return pontoInferiorInvalido;

	if (abscissaEsquerda > maximoColunas)
		return pontoSuperiorInvalido;

	if (abscissaEsquerda > abscissaDireita || ordenadaEsquerda > ordenadaDireita)
		return pontosInvalidos;

	for (horizontal = abscissaEsquerda; horizontal <= abscissaDireita; horizontal++)
	{
		monitor[ordenadaEsquerda][horizontal] = aceso;
		monitor[ordenadaDireita][horizontal] = aceso;
	}

	for (vertical = (ordenadaEsquerda + 1); vertical < (ordenadaDireita); vertical++)
	{
		monitor[vertical][abscissaEsquerda] = aceso;
		monitor[vertical][abscissaDireita] = aceso;
	}

	MostrarMonitor(monitor, maximoLinhas, maximoColunas);

	return ok;
}


tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned linha, unsigned coluna)
{
	
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return dimensoesInvalidas;

	if (linha > maximoLinhas || coluna > maximoColunas)
		return pontosInvalidos;

	if (monitor[linha][coluna] == aceso)
		return ok;
    
    monitor[linha][coluna] = aceso;

    MostrarMonitor(monitor, maximoLinhas, maximoColunas);

	if ((linha + 1) <= maximoLinhas)
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, (linha + 1), coluna);

	if ((linha - 1) >= 0)
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, (linha - 1), coluna);

	if ((coluna + 1) <= maximoColunas)
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha, (coluna + 1));

	if ((coluna - 1) >= 0)
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha, (coluna - 1));

	return ok;
}

/*$RCSfile*/
