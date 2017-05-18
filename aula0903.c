/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/13 14:10:11 $
* $Log: aula0903.c,v $
* Revision 1.1  2017/05/13 14:10:11  victor.oliveira
* Initial revision
*
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
	byte saida[MAX_SAIDA];
	unsigned indice, numeroBytes, erroDecodificacao;

    if (argc != NUMERO_ARGUMENTOS)
	{
		printf("\nNumero de argumentos diferente de %i.\n\n", NUMERO_ARGUMENTOS -1);	
		exit(numeroArgumentosInvalidos);
	}	
	
	if (strlen(argv[1]) > MAX_SAIDA)
	{
		printf("\nArgumento contem mais que %i caracteres\n\n", MAX_SAIDA);
		exit(argumentoInvalido);
	}

	erroDecodificacao = DecodificarBase64 (argv[1], saida, &numeroBytes);
	
	if(erroDecodificacao != ok)
	{
		printf("Erro na decodificao erro#%u\n\n", erroDecodificacao);
		return erroDecodificacao;
	}	

	printf("\n");
	
	for(indice = 0; indice < numeroBytes; indice++)
	{
		printf("%c", saida[indice]);
	}
    
	printf("\n\n");
	return ok;
}	

/*$RCSfile*/
