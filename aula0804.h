/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/04 23:46:57 $
* $Log: aula0804.h,v $
* Revision 1.1  2017/05/04 23:46:57  victor.oliveira
* Initial revision
*
* 
*/

#ifndef _AULA08_H_
#define _AULA08_H_ "@(#)aula0804.h $Revision: 1.1 $"

#define TAMANHO_PIS 11
#define DIGITO_IRREGULAR '\0'

typedef enum{falso, verdadeiro} boolean;

char
GerarDigitoVerificadorPisPasep (char *);

boolean
ValidarPisPasep (char *); 

#endif

/*$RCSfile*/
