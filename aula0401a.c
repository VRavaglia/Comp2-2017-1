/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/06 17:22:49 $
* $Log: aula0401a.c,v $
* Revision 1.1  2017/04/06 17:22:49  victor.oliveira
* Initial revision
* 
*/

#include "aula0401.h"

long double
CalcularExponencial (double base, int expoente)
{
	if (expoente == 0) return 1;
	
	if (expoente < 0) return (1.0 / (CalcularExponencial(base, (-1 * expoente) - 1) * base));
	return (CalcularExponencial (base, expoente - 1) * base);
}
	

/*$RCSfile*/
