/*
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: mncd- $
* $Date: 2017/04/21 02:25:50 $
* $Log: aula0601.h,v $
* Revision 1.1  2017/04/21 02:25:50  mncd-
* Initial revision
* 
*/

#ifndef _AULA0601_H_
#define _AULA0601_H_ "@(#)aula0601.h $Revision: 1.1 $"

#define APAGADO '0'
#define ACESO '1'
#define NUMERO_MAXIMO_LINHAS 25
#define NUMERO_MAXIMO_COLUNAS 80

typedef enum {ok, matrizInvalida, dimensoesInvalidas, pontoPoligonoInvalido, pontoInferiorInvalido, pontoSuperiorInvalido, pontosInvalidos, numeroArgumentosInvalido, argumentoInvalido} tipoErros;
typedef enum {apagado, aceso} tipoPixel;

tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned ordenadaEsquerda, unsigned abscissaEsquerda, unsigned ordenadaDireita, unsigned abscissaDireita);

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned linha, unsigned coluna);

#endif

/*$RCSfile*/
