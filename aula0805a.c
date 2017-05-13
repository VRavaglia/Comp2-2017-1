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
* $Log: aula0805a.c,v $
* Revision 1.1  2017/05/09 00:21:14  vravaglia
* Initial revision
*
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0804.h"

#define NUMERO_ARGUMENTOS 11 
#define EOS '\0'

#define OK 0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define ARGUMENTOS_INVALIDOS 2
#define DIGITO_MAIOR_QUE_9 3

int
main (int argc, char *argv[])
{
	char *validacao;
	char pis[TAMANHO_PIS];
	unsigned indice;
	char digitoVerificador;

    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}	
	
	for (indice = 1; indice < argc; indice ++)
	{	
		strtoull(argv[indice], &validacao, 10);
		
		if (*validacao != EOS || strtoull(argv[indice], &validacao, 10) > 255 || argv[indice][0] == '-') 
		{	
			printf("\nArgumento #%i invalido, \nUso: <u1> <u2> ... <u10>\n\n", indice);
			exit(ARGUMENTOS_INVALIDOS);
		}

		pis[indice - 1] = argv[indice][0];
	}

	digitoVerificador = GerarDigitoVerificadorPisPasep(pis);
	
	if (digitoVerificador == DIGITO_IRREGULAR)
	{	
		printf("\nUm dos digitos e maior que 9.\n\n");
		return DIGITO_MAIOR_QUE_9;
	}
		
	printf("\nDigito verificador: %c\n\n", digitoVerificador);

    return OK;
}	

/**/
