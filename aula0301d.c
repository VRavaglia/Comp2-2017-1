/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/30 16:30:08 $
* $Log: aula0301d.c,v $
* Revision 1.1  2017/03/30 16:30:08  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0301.h"

ull
CalcularTermoSerieFibonacci (unsigned short numeroTermo)
{
    if (numeroTermo <= 1) return numeroTermo;
	
	unsigned short indiceFibonacci = 2;

	ull valorTermoAnterior = 0;
	ull valorTermoAtual = 1;
	ull valorIntermediario;	
	
	while (indiceFibonacci <= numeroTermo)
	{
		valorIntermediario = valorTermoAnterior;
		valorTermoAnterior = valorTermoAtual;
		valorTermoAtual += valorIntermediario;
		indiceFibonacci++;
	}
	
	return valorTermoAtual;	
}

/*$RCSfile*/
