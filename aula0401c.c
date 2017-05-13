/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/06 22:57:49 $
* $Log: aula0401c.c,v $
* Revision 1.1  2017/04/06 22:57:49  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0401.h"

long double
CalcularExponencial (double base, int expoente)
{
	long double resultado = 1;
	int indice;
	short negativo = 0;

	if (expoente == 0) return 1;
	
	if (expoente < 0)
	{	
		negativo = 1;
		expoente *= -1;
	}

	for (indice = 0; indice < expoente; indice++)
	{
		resultado *= base;
	}
	
	if (negativo) return (1.0 / resultado);
	return resultado;
}	

/*$RCSfile*/
