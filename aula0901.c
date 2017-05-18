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
* $Log: aula0901.c,v $
* Revision 1.2  2017/05/13 14:10:11  victor.oliveira
* Adicionado suporte para funcao de decodificar.
*
* Revision 1.1  2017/05/12 00:43:32  victor.oliveira
* Initial revision
*
* 
*/

#include "aula0901.h"
#include <stdio.h>
#include <string.h>

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida)
{
	unsigned indiceEntrada, indiceSaida, indiceQuebra;
	indiceSaida = indiceQuebra = 0;
	for (indiceEntrada = 0; indiceEntrada < numeroBytes; indiceEntrada++)
	{
		if ((indiceSaida - indiceQuebra) % 76 == 0 && indiceSaida > 0)
		{
			saida[indiceSaida] = '\r';
			saida[indiceSaida + 1] = '\n';
			indiceSaida += 2;
			indiceQuebra += 2;
		}	
		if((indiceEntrada + 1) % 3 == 0)
		{
			saida[indiceSaida] = CONJUNTO_BASE_64[(entrada[indiceEntrada-2]>>2) & (0x3F)];
			saida[indiceSaida + 1] = CONJUNTO_BASE_64[(((entrada[indiceEntrada-2]<<4) & (0x30)) | (((entrada[indiceEntrada-1]>>4)) & (0x0F)))];
			saida[indiceSaida + 2] = CONJUNTO_BASE_64[(((entrada[indiceEntrada-1]<<2) & (0x3C)) | (((entrada[indiceEntrada]>>6)) & (0x03)))];
			saida[indiceSaida + 3] = CONJUNTO_BASE_64[(entrada[indiceEntrada] & (0x3F))];
			indiceSaida += 4;
		}
	}
	switch (indiceEntrada - (((indiceSaida - indiceQuebra) / 4) * 3))
	{
		case 1:
			saida[indiceSaida] = CONJUNTO_BASE_64[(entrada[indiceEntrada-1]>>2) & (0x3F)];
			saida[indiceSaida + 1] = CONJUNTO_BASE_64[((entrada[indiceEntrada-1]<<4) & (0x30))];
			saida[indiceSaida + 2] = '=';
			saida[indiceSaida + 3] = '=';
			indiceSaida += 4;
		break;
		case 2:
			saida[indiceSaida] = CONJUNTO_BASE_64[(entrada[indiceEntrada-2]>>2) & (0x3F)];
			saida[indiceSaida + 1] = CONJUNTO_BASE_64[(((entrada[indiceEntrada-2]<<4) & (0x30)) | (((entrada[indiceEntrada-1]>>4)) & (0x0F)))];
			saida[indiceSaida + 2] = CONJUNTO_BASE_64[((entrada[indiceEntrada-1]<<2) & (0x3C))];
			saida[indiceSaida + 3] = '=';
			indiceSaida += 4;
		break;
	}
	saida[indiceSaida] = '\0';
	return ok;
}

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes)
{
	unsigned indiceEntrada, indiceSaida, indiceQuebra, indiceConversao, padding;
	indiceSaida = indiceQuebra = padding = 0;
	unsigned long tamanhoEntrada = strlen(entrada);

	if (entrada[tamanhoEntrada-1] == '=')
	{	
		padding++;
		entrada[tamanhoEntrada-1] = 0;
	}

	if (entrada[tamanhoEntrada-2] == '=')
	{	
		padding++;
		entrada[tamanhoEntrada-2] = 0;
	}

	for (indiceEntrada = 0; indiceEntrada < (tamanhoEntrada - padding); indiceEntrada++)
	{
		if(entrada[indiceEntrada] == '\r' || entrada[indiceEntrada] == '\n')
		{
			memmove((entrada + indiceEntrada), (entrada + indiceEntrada + 1), (strlen(entrada) - indiceEntrada));
		}
		else	
		{
			indiceConversao = 0;
			while (CONJUNTO_BASE_64[indiceConversao] != entrada[indiceEntrada])
			{
				indiceConversao++;			
				if (indiceConversao > 64)
					return caractereEntradaInvalido;
				
			}	
			entrada[indiceEntrada] = indiceConversao;
		}
	}

	for (indiceEntrada = 0; indiceEntrada < tamanhoEntrada; indiceEntrada++)
	{
		if((indiceEntrada + 1) % 4 == 0)
		{
			saida[indiceSaida] = (((entrada[indiceEntrada-3]<<2) & 0xFC) | (0x03 & (entrada[indiceEntrada-2]>>4)));
			saida[indiceSaida + 1] = ((entrada[indiceEntrada-2]<<4) & 0xF0) | ((entrada[indiceEntrada-1]>>2) & 0x0F);
			saida[indiceSaida + 2] = ((entrada[indiceEntrada-1]<<6) & 0xC0) | (entrada[indiceEntrada] & 0x3F);
			indiceSaida += 3;
		}
	}

	saida[indiceSaida] = '\0';

	if (indiceSaida == 0)
		return entradaPequena;

	*numeroBytes = indiceSaida - padding;

	return ok;
}	

/*$RCSfile: aula0901.c,v $*/
