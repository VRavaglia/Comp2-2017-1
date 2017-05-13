/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/30 15:24:22 $
* $Log: aula0302.c,v $
* Revision 1.1  2017/03/30 15:24:22  victor.oliveira
* Initial revision
*
* Revision 1.1  2017/03/25 16:23:43  victor.oliveira
* Initial revision
*
*
*/
#include "aula0301.h"
#include <stdio.h>
#include <stdlib.h>


#define NUMERO_ARGUMENTOS 2 
#define EOS '\0'
#define OK 0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define ARGUMENTO_INVALIDO 2

int main(int argc, char *argv[])
{
	int indiceArgumento, indiceCaractere;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <inteiro>\n", argv [0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
				  
	}

	for (indiceArgumento = 1; indiceArgumento < argc; indiceArgumento++)
		for (indiceCaractere = 0; argv [indiceArgumento][indiceCaractere] != EOS; indiceCaractere++)
	    	if (argv [indiceArgumento][indiceCaractere] < '0' || argv [indiceArgumento][indiceCaractere] > '9')
		  	{
				printf ("Entrada contem caractere invalido. Argumento #%u\n", indiceArgumento);
				exit (ARGUMENTO_INVALIDO);
							        
		  	}
	
	short int indiceFibonacci;
    
	for (indiceFibonacci = 0; indiceFibonacci <= atoi (argv[1]); indiceFibonacci++)
    {
    	printf("\nF(%hu) = %llu", indiceFibonacci, (unsigned long long)CalcularTermoSerieFibonacci (indiceFibonacci));
    }
	
	printf("\n\n");
	
	return OK;
}	

/*$RCSfile*/
