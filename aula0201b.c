/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/25 20:12:54 $
* $Log: aula0201b.c,v $
* Revision 1.1  2017/03/25 20:12:54  victor.oliveira
* Initial revision
*
*
*
*/

#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull operadorX, ull operadorY)
{
	if (operadorX == 0) return operadorY;
	if (operadorY == 0) return operadorX;
		
	ull operadorZ;	

	do
	{
		operadorZ = operadorX % operadorY;
		operadorX = operadorY;
		operadorY = operadorZ;
	}
	while(operadorZ != 0);
	return operadorX;
}	

/*$RCSfile*/
