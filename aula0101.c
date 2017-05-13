/* 
* Universidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2017/1
* Prof. Marcelo Luiz Drumond Lanza
* Autor: Victor Raposo Ravaglia de Oliveira
*
* $Author: victor.oliveira $
* $Date: 2017/03/18 19:02:53 $
* $Log: aula0101.c,v $
* Revision 1.1  2017/03/18 19:02:53  victor.oliveira
* Initial revision
*
*/

#include <stdio.h>
#define	OK	0

/*O codigo tem como objetivo exibir os 5 tipos principais
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
	printf("\t\t%lu %s\n\n",(unsigned long) sizeof(void), sizeof(void) != 1 ? "bytes":"byte");
	
	return OK;
}	

/* $RCSfile: aula0101.c,v $ */
