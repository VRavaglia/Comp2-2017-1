/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/30 16:25:07 $
* $Log: aula0301c.c,v $
* Revision 1.1  2017/03/30 16:25:07  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0301.h"

ull
CalcularTermoSerieFibonacci (unsigned short numeroTermo)
{
    if (numeroTermo <= 1) return numeroTermo;
	
	unsigned short indiceFibonacci;

	ull valorTermoAnterior = 0;
	ull valorTermoAtual = 1;
	ull valorIntermediario;	
	for(indiceFibonacci = 2; indiceFibonacci <= numeroTermo; indiceFibonacci++)
	{
		valorIntermediario = valorTermoAnterior;
		valorTermoAnterior = valorTermoAtual;
		valorTermoAtual += valorIntermediario;
	}
	
	return valorTermoAtual;	
}

/*$RCSfile*/
