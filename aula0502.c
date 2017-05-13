/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/15 20:42:26 $
* $Log: aula0502.c,v $
* Revision 1.1  2017/04/15 20:42:26  victor.oliveira
* Initial revision
*
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0501.h"
#include "aula0401.h"

#define OK 0
#define ARGUMENTO_INVALIDO 1
#define NUMERO_ARGUMENTOS_INVALIDO 2
#define NUMERO_ARGUMENTOS 2
#define EOS '\0'

int
main (int argc, char *argv[])
{
	char *validacao;
	long termos;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}	
	
	termos = strtol(argv[1], &validacao, 10);
	if (*validacao != EOS  || termos < 0) 
	{	
		printf("Argumento #%i invalido, \nUso: <unsigned long int>\n\n", 1);
		exit(ARGUMENTO_INVALIDO);
	}	
	
	printf("\nResultado: %f\n\n", CalcularSerieHarmonicaAlternada(strtoul(argv[1], &validacao, 10)));

	exit(OK);
}	

/*$RCSfile*/
