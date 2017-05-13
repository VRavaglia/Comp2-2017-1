/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 20:16:08 $
* $Log: aula0801.c,v $
* Revision 1.2  2017/05/04 20:16:08  victor.oliveira
* Adicionada funcao para validar Pis.
*
* Revision 1.1  2017/05/04 18:37:59  victor.oliveira
* Initial revision
* 
*/

#include "aula0801.h"
#include <stdio.h>

byte
GerarDigitoVerificadorPisPasep (byte pis[TAMANHO_PIS-1])
{
	unsigned indice, resto;
	byte pesos[10] = {3,2,9,8,7,6,5,4,3,2};
	unsigned short somaPesos = 0;

	for (indice = 0; indice < (TAMANHO_PIS - 1); indice++)
	{
		if (pis[indice] > 9)
		{	
			return DIGITO_IRREGULAR;
		}
		somaPesos += pis[indice] * pesos[indice];
	}
	
	resto = somaPesos % 11;
	
	if (resto == 0 || resto == 1)
		return 0;
	
	return (11 - resto);
}

boolean
ValidarPisPasep (byte pis[TAMANHO_PIS]) 
{
	if(GerarDigitoVerificadorPisPasep(pis) != pis[TAMANHO_PIS - 1])
		return falso;

	return verdadeiro;
}


/*$RCSfile*/
