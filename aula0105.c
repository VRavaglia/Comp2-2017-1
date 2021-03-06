/* 
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/18 22:48:59 $
* $Log: aula0105.c,v $
* Revision 1.1  2017/03/18 22:48:59  victor.oliveira
* Initial revision
*
* 
*/

#include <stdio.h>
#define	OK	0

/*O codigo tem como objetivo exibir os 5 tipos principais,
 * os dois modificadores de sinal,
 * os modificadores de largura,
 * suas combinacoes,
 * todas as combinacoes possiveis entre os operadores anteriores
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

	printf("\nTipos Basicos combinados com Modificadores de Sinal\n\n");
	
	printf("signed char:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed char), sizeof(signed char) != 1 ? "bytes":"byte");
	printf("unsigned char:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned char), sizeof(unsigned char) != 1 ? "bytes":"byte");
	
	printf("signed int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed int), sizeof(signed int) != 1 ? "bytes":"byte");
	printf("unsigned int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned int), sizeof(unsigned int) != 1 ? "bytes":"byte");

	printf("\nTipos Basicos combinados com Modificadores de Largura\n\n");
	
	printf("short int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(short int), sizeof(short int) != 1 ? "bytes":"byte");
	printf("long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(long int), sizeof(long int) != 1 ? "bytes":"byte");
	printf("long long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(long long int), sizeof(long long int) != 1 ? "bytes":"byte");
	
	printf("long double:\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(long double), sizeof(long double) != 1 ? "bytes":"byte");

	printf("\nTipos Basicos combinados com Modificadores de Sinal e Modificadores de Largura\n\n");
	
	printf("signed short int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed short int), sizeof(signed short int) != 1 ? "bytes":"byte");
	printf("signed long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed long int), sizeof(signed long int) != 1 ? "bytes":"byte");
	printf("signed long long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(signed long long int), sizeof(signed long long int) != 1 ? "bytes":"byte");
	printf("unsigned short int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned short int), sizeof(unsigned short int) != 1 ? "bytes":"byte");
	printf("unsigned long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned long int), sizeof(unsigned long int) != 1 ? "bytes":"byte");
	printf("unsigned long long int\n");
	printf("\t\t%lu %s\n",(unsigned long) sizeof(unsigned long long int), sizeof(unsigned long long int) != 1 ? "bytes":"byte");

	printf("\nCombinacoes Invalidas\n\n");

	printf("signed double\n");
	printf("unsigned double\n\n");
	
	printf("signed float\n");
	printf("unsigned float\n\n");
	
	printf("signed void\n");
	printf("unsigned void\n\n");

	printf("\n");

	printf("short char\n");
	printf("long char\n");
	printf("long long char\n\n");

	printf("short double\n");
	printf("long long double\n\n");

	printf("short float\n");
	printf("long float\n");
	printf("long long float\n\n");

	printf("short void\n");
	printf("long void\n");
	printf("long long void\n\n");

	printf("\n");

	printf("signed short char\n");
	printf("signed long char\n");
	printf("signed long long char\n");
	printf("unsigned short char\n");
	printf("unsigned long char\n");
	printf("unsigned long long char\n\n");

	printf("signed short double\n");
	printf("signed long double\n");
	printf("signed long long double\n");
	printf("unsigned short double\n");
	printf("unsigned long double\n");
	printf("unsigned long long double\n\n");

	printf("signed short float\n");
	printf("signed long float\n");
	printf("signed long long float\n");
	printf("unsigned short float\n");
	printf("unsigned long float\n");
	printf("unsigned long long float\n\n");

	printf("signed short void\n");
	printf("signed long void\n");
	printf("signed long long void\n");
	printf("unsigned short void\n");
	printf("unsigned long void\n");
	printf("unsigned long long void\n\n");

	printf("\n");

	return OK;
}	

/* $RCSfile: aula0105.c,v $ */
