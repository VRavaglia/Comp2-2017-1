/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 18:37:59 $
* $Log: aula0801.h,v $
* Revision 1.1  2017/05/04 18:37:59  victor.oliveira
* Initial revision
* 
*/

#ifndef _AULA08_H_
#define _AULA08_H_ "@(#)aula0801.h $Revision: 1.1 $"

#define TAMANHO_PIS 11
#define DIGITO_IRREGULAR 10

typedef enum{falso, verdadeiro} boolean;
typedef unsigned char byte;

byte
GerarDigitoVerificadorPisPasep (byte[TAMANHO_PIS]);

boolean
ValidarPisPasep (byte[TAMANHO_PIS]); 

#endif

/*$RCSfile*/
