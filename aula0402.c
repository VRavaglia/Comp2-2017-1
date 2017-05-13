/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/06 17:47:32 $
* $Log: aula0402.c,v $
* Revision 1.1  2017/04/06 17:47:32  victor.oliveira
* Initial revision
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0401.h"

#define OK 0
#define ARGUMENTO_INVALIDO 1
#define NUMERO_ARGUMENTOS_INVALIDO 2
#define NUMERO_ARGUMENTOS 3
#define EOS '\0'

int
main (int argc, char *argv[])
{
	int indice;
	char *validacao;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}	
	
	for (indice = 1; indice < NUMERO_ARGUMENTOS; indice++)
	{
		strtod(argv[indice], &validacao);
		if (*validacao != EOS) 
		{	
			printf("Argumento #%i invalido, \nUso: <double> <integer>\n\n", indice);
			exit(ARGUMENTO_INVALIDO);
		}
	}	
	
	printf("\nResultado: %Lf\n\n", CalcularExponencial(strtod(argv[1],&validacao), (int)strtod(argv[2], &validacao)));

	exit(OK);
}	

/*$RCSfile*/
