/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/05 00:37:53 $
* $Log: aula0804.c,v $
* Revision 1.2  2017/05/05 00:37:53  victor.oliveira
* Adicionada funcao para Validar Pis.
*
* Revision 1.1  2017/05/04 23:46:57  victor.oliveira
* Initial revision
*
*/

#include "aula0804.h"
#include <stdio.h>

char
GerarDigitoVerificadorPisPasep (char *pis)
{
	unsigned indice, resto;
	unsigned pesos[10] = {3,2,9,8,7,6,5,4,3,2};
	unsigned short somaPesos = 0;

	for (indice = 0; indice < (TAMANHO_PIS - 1); indice++)
	{
		if (pis[indice] < '0' || '9' < pis[indice])
		{	
			return DIGITO_IRREGULAR;
		}
		somaPesos += (unsigned)(pis[indice] - '0') * pesos[indice];
	}
	
	resto = somaPesos % 11;
	
	if (resto == 0 || resto == 1)
		return '0';
	
	return (11 - resto + '0');
}

boolean
ValidarPisPasep (char *pis) 
{
	if(GerarDigitoVerificadorPisPasep(pis) != pis[TAMANHO_PIS])
		return falso;

	return verdadeiro;
}


/*$RCSfile*/
