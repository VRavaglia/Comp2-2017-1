/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/30 15:24:22 $
* $Log: aula0301a.c,v $
* Revision 1.1  2017/03/30 15:24:22  victor.oliveira
* Initial revision
* 
*/

#include "aula0301.h"

ull
CalcularTermoSerieFibonacci (unsigned short numeroTermo)
{
    if (numeroTermo <= 1) return numeroTermo;

    return (CalcularTermoSerieFibonacci (numeroTermo - 1) + CalcularTermoSerieFibonacci (numeroTermo - 2));
}

/*$RCSfile*/
