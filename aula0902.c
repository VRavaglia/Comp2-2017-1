/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/12 00:43:32 $
* $Log: aula0902.c,v $
* Revision 1.1  2017/05/12 00:43:32  victor.oliveira
* Initial revision
*
* Revision 1.1  2017/05/12 00:38:48  vravaglia
* Initial revision
*
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0901.h"

#define NUMERO_ARGUMENTOS 2 
#define EOS '\0'

int
main (int argc, char *argv[])
{
	char saida[MAX_SAIDA];
	unsigned indice;

    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(numeroArgumentosInvalidos);
	}	
	
	if (strlen(argv[1]) > MAX_ENTRADA)
	{
		printf("\nArgumento contem mais que %i caracteres\n\n", MAX_ENTRADA);
		exit(argumentoInvalido);
	}


	CodificarBase64((byte *)argv[1], (unsigned)strlen(argv[1]), saida);

	printf("\nBase64: ");
	
	for(indice = 0; indice < strlen(saida); indice++)
	{
		printf("%c", saida[indice]);
	}
    
	printf("\n\n");
	return ok;
}	

/*$RCSfile: aula0902.c,v $*/
