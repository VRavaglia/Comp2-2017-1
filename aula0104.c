/* 
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/18 21:36:15 $
* $Log: aula0104.c,v $
* Revision 1.1  2017/03/18 21:36:15  victor.oliveira
* Initial revision
*
*/

#include <stdio.h>
#define	OK	0

/*O codigo tem como objetivo exibir os 5 tipos principais,
 * os dois modificadores de sinal,
 * os modificadores de largura,
 * suas combinacoes
 * e seus respectivos tamanhos em bytes.
 */

int
main(int argc, char *argv[])
{
	printf("\nTipos Basicos\n\n");
	
	printf("char:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(char), sizeof(char) != 1 ? "bytes":"byte");
	
	printf("int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(int), sizeof(int) != 1 ? "bytes":"byte");
	
	printf("double:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(double), sizeof(double) != 1 ? "bytes":"byte");
	
	printf("float:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(float), sizeof(float) != 1 ? "bytes":"byte");
	
	printf("void:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(void), sizeof(void) != 1 ? "bytes":"byte");
	
	printf("\n");
	
	printf("\nModificadores de Sinal\n\n");

	printf("signed:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed), sizeof(signed) != 1 ? "bytes":"byte");

	printf("unsigned:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned), sizeof(unsigned) != 1 ? "bytes":"byte");
	
	printf("\n");
	
	printf("\nModificadores de Largura\n\n");

	printf("short:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(short), sizeof(short) != 1 ? "bytes":"byte");

	printf("long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(long), sizeof(long) != 1 ? "bytes":"byte");
	
	printf("long long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(long long), sizeof(long long) != 1 ? "bytes":"byte");

	printf("\n");
	
	printf("\nModificadores de Sinal combinados com Modificadores de Largura\n\n");
	
	printf("signed short:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed short), sizeof(signed short) != 1 ? "bytes":"byte");

	printf("unsigned short:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned short), sizeof(unsigned short) != 1 ? "bytes":"byte");

	printf("signed long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed long), sizeof(signed long) != 1 ? "bytes":"byte");
	
	printf("unsigned long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned long), sizeof(unsigned long) != 1 ? "bytes":"byte");
	
	printf("signed long long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed long long), sizeof(signed long long) != 1 ? "bytes":"byte");
	
	printf("unsigned long long:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned long long), sizeof(unsigned long long) != 1 ? "bytes":"byte");
	
	printf("\n");

	return OK;
}	

/* $RCSfile: aula0104.c,v $ */
