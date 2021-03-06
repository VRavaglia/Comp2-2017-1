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
* $Log: aula0602.c,v $
* Revision 1.1  2017/04/21 02:25:50  mncd-
* Initial revision
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0601.h"

#define NUMERO_ARGUMENTOS 9 
#define EOS '\0'

int
main (int argc, char *argv[])
{
	char *validacao;
	unsigned indice, maxLinhas, maxColunas, absSuperior, ordSuperior, absInferior, ordInferior, xPreencher, yPreencher;
    tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];
	
    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(numeroArgumentosInvalido);
	}	
	
	for (indice = 1; indice < argc; indice ++)
	{	
		strtoul(argv[indice], &validacao, 10);
		if (*validacao != EOS  || argv[indice][0] == '-') 
		{	
			printf("\nArgumento #%i invalido, \nUso: <unsigned long int>\n\n", indice);
			exit(argumentoInvalido);
		}	
	}	
	
    maxLinhas = (unsigned)strtoul(argv[1], &validacao, 10);
    maxColunas = (unsigned)strtoul(argv[2], &validacao, 10);
    absSuperior = (unsigned)strtoul(argv[3], &validacao, 10);
    ordSuperior = (unsigned)strtoul(argv[4], &validacao, 10);
    absInferior = (unsigned)strtoul(argv[5], &validacao, 10);
    ordInferior = (unsigned)strtoul(argv[6], &validacao, 10);
    xPreencher = (unsigned)strtoul(argv[7], &validacao, 10);
    yPreencher = (unsigned)strtoul(argv[8], &validacao, 10);

	if (maxLinhas > NUMERO_MAXIMO_LINHAS || maxColunas > NUMERO_MAXIMO_COLUNAS)
	{
		printf("\nDimensoes da matriz invalidas, insira uma matriz de\nno maximo %i linhas e %i colunas\n\n", NUMERO_MAXIMO_LINHAS, NUMERO_MAXIMO_COLUNAS);
	    exit(dimensoesInvalidas);
    }	

	if (absSuperior > maxColunas || ordSuperior > maxLinhas)
	{
		printf("\nPonto superior invalido, coordenadas nao podem ser maiores que %u e %u respectivamente.\n\n", maxColunas, maxLinhas);
        exit(pontoSuperiorInvalido);    
	}	

    if (absInferior > maxColunas || ordInferior > maxLinhas)
	{
        printf("\nabsI%uordI%u",absInferior, ordInferior);
		printf("\nPonto inferior invalido, coordenadas nao podem ser maiores que %u e %u respectivamente.\n\n", maxColunas, maxLinhas);
        exit(pontoInferiorInvalido);    
	}

	if (absSuperior > absInferior || ordSuperior > ordInferior)
	{
		printf("\nPonto superior nao esta a esquerda do inferior.\n\n");
        exit(pontosInvalidos);    
	}

	if (xPreencher > maxColunas || yPreencher > maxLinhas)
	{
		printf("\nPonto dentro do poligono deve estar dentro do monitor\n\n");
        exit(pontoPoligonoInvalido);    
	}

    LimparMonitor(monitor, maxLinhas, maxColunas);
    MostrarMonitor(monitor, maxLinhas, maxColunas);
    DesenharRetangulo(monitor, maxLinhas, maxColunas, ordSuperior, absSuperior, ordInferior, absInferior);
    PreencherPoligono(monitor, maxLinhas, maxColunas, yPreencher, xPreencher);
    exit(ok);
}	

/*$RCSfile*/
