/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 22:47:59 $
* $Log: aula0803b.c,v $
* Revision 1.1  2017/05/04 22:47:59  victor.oliveira
* Initial revision
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0801.h"

#define NUMERO_CARACTERES 12
#define EOS '\0'

#define OK 0
#define NUMERO_CARACTERES_INVALIDO 1
#define NUMERO_ARGUMENTOS_INVALIDO 2
#define CARACTERE_INVALIDO 3

int
main (int argc, char *argv[])
{
	byte pis[TAMANHO_PIS];
	unsigned indice;

    if (argc != 2)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", 1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}

	if (strlen(argv[1]) != NUMERO_CARACTERES)
	{	
		printf("\nNumero de caracteres invalido.\n\n");
		exit(NUMERO_CARACTERES_INVALIDO);
	}

	for (indice = 0; indice < NUMERO_CARACTERES - 2; indice++)
	{
		if (argv [1][indice] < '0' || argv [1][indice] > '9')
		{
			printf ("\nCaractere #%i invalido: \"%c\"\n\n", indice, argv[1][indice]);
			exit (CARACTERE_INVALIDO);
		}
	
		pis[indice] = (byte)(argv[1][indice] - '0');
	}
	if (argv[1][indice] != '-')
	{	
		printf ("\nCaractere #%i invalido: \"%c\"\n\n", indice, argv[1][indice]);
		exit (CARACTERE_INVALIDO);
	}

	indice++;

	if (argv[1][indice] < '0' || argv[1][indice] > '9')
	{	
		printf ("\nCaractere #%i invalido: \"%c\"\n\n", indice, argv[1][indice]);
		exit (CARACTERE_INVALIDO);
	}
	pis[indice - 1] = (byte)(argv[1][indice] - '0'); 

	printf("\nValidacao: %s\n\n", ValidarPisPasep(pis)?"Valido":"Invalido");

    return OK;
}	

/*$RCSfile*/
