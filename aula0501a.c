/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/04/13 21:09:12 $
* $Log: aula0501a.c,v $
* Revision 1.1  2017/04/13 21:09:12  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0501.h"
#include "aula0401.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int termos)
{
	if (termos == 0) return 0;
	if (termos % 2 == 0) return CalcularSerieHarmonicaAlternada(termos - 1) - CalcularExponencial(termos, -1 * termos);
	return CalcularSerieHarmonicaAlternada(termos - 1) + CalcularExponencial(termos, -1 * termos);
}
	

/*$RCSfile*/
