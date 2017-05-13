/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/13 21:37:49 $
* $Log: aula0501d.c,v $
* Revision 1.1  2017/04/13 21:37:49  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0501.h"
#include "aula0401.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int termos)
{
	float serieHarmonica = 0;
	unsigned long indice = termos;

	if (termos == 0) return 0;
	
	while (indice > 0)
	{	
		if (indice % 2 == 0) 
		{	
			serieHarmonica -= CalcularExponencial(indice, -1 * indice);
		}
		else
		{
			serieHarmonica += CalcularExponencial(indice, -1 * indice);
		}
		
		indice--;
	}

	return serieHarmonica;
}
	

/*$RCSfile*/
