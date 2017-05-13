/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/25 16:23:43 $
* $Log: aula0202.c,v $
* Revision 1.1  2017/03/25 16:23:43  victor.oliveira
* Initial revision
*
*
*/
#include "aula0201.h"
#include <stdio.h>
#include <stdlib.h>


#define NUMERO_ARGUMENTOS 3 
#define EOS '\0'
#define OK 0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define ARGUMENTO_INVALIDO 2

int main(int argc, char *argv[])
{
	int indiceArgumento, indiceCaractere;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <inteiro> <inteiro>\n", argv [0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
				  
	}

	for (indiceArgumento = 1; indiceArgumento < argc; indiceArgumento++)
		for (indiceCaractere = 0; argv [indiceArgumento][indiceCaractere] != EOS; indiceCaractere++)
	    	if (argv [indiceArgumento][indiceCaractere] < '0' || argv [indiceArgumento][indiceCaractere] > '9')
		  	{
				printf ("Entrada contem caractere invalido. Argumento #%u\n", indiceArgumento);
				exit (ARGUMENTO_INVALIDO);
							        
		  	}

	printf("\n%llu\n\n", (unsigned long long)CalcularMaximoDivisorComum (atoi (argv [1]), atoi (argv [2])));
	return OK;
}	

/*$RCSfile*/
