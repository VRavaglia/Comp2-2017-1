/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 18:38:34 $
* $Log: aula0802a.c,v $
* Revision 1.1  2017/05/04 18:38:34  victor.oliveira
* Initial revision
*
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0801.h"

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
	byte pis[TAMANHO_PIS];
	unsigned indice;
	byte digitoVerificador;

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
			printf("\nArgumento #%i invalido, \nUso: <float>\n\n", indice);
			exit(ARGUMENTOS_INVALIDOS);
		}

		pis[indice - 1] = (unsigned char)strtoull(argv[indice], &validacao, 10);
	}

	digitoVerificador = GerarDigitoVerificadorPisPasep(pis);
	
	if (digitoVerificador == 10)
	{	
		printf("\nUm dos digitos e maior que 9.\n\n");
		return DIGITO_MAIOR_QUE_9;
	}
		
	printf("\nDigito verificador: %u\n\n", digitoVerificador);

    return OK;
}	

/*$RCSfile*/
