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
* $Log: aula0806a.c,v $
* Revision 1.1  2017/05/09 00:21:14  vravaglia
* Initial revision
*
*
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0804.h"

#define NUMERO_ARGUMENTOS 13 
#define EOS '\0'

#define OK 0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define ARGUMENTOS_INVALIDOS 2
#define DIGITO_MAIOR_QUE_9 3

int
main (int argc, char *argv[])
{
	char *validacao;
	char pis[TAMANHO_PIS + 1];
	unsigned indice;

    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}	
	
	for (indice = 1; indice < argc; indice++)
	{
		strtoull(argv[indice], &validacao, 10);
		if (indice == argc - 2)
		{	
			if(argv[indice][0] != '-')
			{
				printf("\nArgumento #%i invalido, deve ser um hifen, era:%c \n\n", indice, argv[indice][0]);
				exit(ARGUMENTOS_INVALIDOS);
			}
		}	
		else
		{
			if (*validacao != EOS || strtoull(argv[indice], &validacao, 10) > 9 || argv[indice][0] == '-') 
			{	
				printf("\nArgumento #%i invalido, \nUso: <unsigned>\n\n", indice);
				exit(ARGUMENTOS_INVALIDOS);
			}
		}

		pis[indice - 1] = argv[indice][0];
	}

	printf("\nValidacao: %s\n\n", ValidarPisPasep(pis)?"Vailido":"Invalido");

    return OK;
}	

/**/
