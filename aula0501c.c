/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/13 21:33:41 $
* $Log: aula0501c.c,v $
* Revision 1.1  2017/04/13 21:33:41  victor.oliveira
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
	unsigned long indice;

	if (termos == 0) return 0;
	
	for (indice = termos; indice > 0; indice--)
	{	
		if (indice % 2 == 0) 
		{	
			serieHarmonica -= CalcularExponencial(indice, -1 * indice);
		}
		else
		{
			serieHarmonica += CalcularExponencial(indice, -1 * indice);
		}

	}

	return serieHarmonica;
}
	

/*$RCSfile*/
