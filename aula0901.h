/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/05/13 14:10:11 $
* $Log: aula0901.h,v $
* Revision 1.2  2017/05/13 14:10:11  victor.oliveira
* Adicionado suporte para funcao de decodificar.
*
* Revision 1.1  2017/05/12 00:41:55  victor.oliveira
* Initial revision
*
*
* 
*/

#ifndef _AULA0901_H_
#define _AULA0901_H_ "@(#)aula0901.h $Revision: 1.2 $"

#define CONJUNTO_BASE_64	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="
#define MAX_ENTRADA	768
#define MAX_SAIDA	1051

typedef enum{ok, argumentoInvalido, numeroArgumentosInvalidos, caractereEntradaInvalido, entradaPequena} tipoErros;
typedef unsigned char byte;

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes);


#endif


/*$RCSfile: aula0901.h,v $*/
