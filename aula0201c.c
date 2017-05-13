/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/25 20:31:53 $
* $Log: aula0201c.c,v $
* Revision 1.1  2017/03/25 20:31:53  victor.oliveira
* Initial revision
*
*
*/

#include "aula0201.h"
#include <stdio.h>

ull
CalcularMaximoDivisorComum (ull operadorX, ull operadorY)
{
	if (operadorX == 0) return operadorY;
	if (operadorY == 0) return operadorX;
		
	ull operadorZ, indiceMDC;

	for(indiceMDC = operadorX; indiceMDC != 0; indiceMDC = operadorZ)
	{
		operadorZ = operadorX % operadorY;
		operadorX = operadorY;
		operadorY = operadorZ;
	}
	return operadorX;
}	

/*$RCSfile*/
