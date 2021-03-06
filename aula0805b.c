/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: vravaglia $
* $Date: 2017/05/09 00:21:14 $
* $Log: aula0805b.c,v $
* Revision 1.1  2017/05/09 00:21:14  vravaglia
* Initial revision
*
* 
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0804.h"

#define NUMERO_CARACTERES 10 
#define EOS '\0'

#define OK 0
#define NUMERO_CARACTERES_INVALIDO 1
#define NUMERO_ARGUMENTOS_INVALIDO 2
#define CARACTERE_INVALIDO 3

int
main (int argc, char *argv[])
{
	char pis[TAMANHO_PIS];
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

	for (indice = 0; indice < NUMERO_CARACTERES; indice++)
	{
		if (argv [1][indice] < '0' || argv [1][indice] > '9')
		{
			printf ("\nCaractere #%i invalido: \"%c\"\n\n", indice, argv[1][indice]);
			exit (CARACTERE_INVALIDO);
		}
	
		pis[indice] = argv[1][indice];
	}

	printf("\nDigito verificador: %c\n\n", GerarDigitoVerificadorPisPasep(pis));

    return OK;
}	

/**/
