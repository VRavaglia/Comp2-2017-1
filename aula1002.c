/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Victor Raposo Ravaglia de Oliveira
 * 
 * $Author: victor.oliveira $
 * $Date: 2017/05/23 18:02:33 $
 * $Log: aula1002.c,v $
 * Revision 1.1  2017/05/23 18:02:33  victor.oliveira
 * Initial revision
 *
 *
 *
 */
#ifdef __linux__
#define _XOPEN_SOURCE 500
#endif

#ifdef __FreeBSD__
#define _WITH_DPRINTF

#if ( __FreeBSD == 9 )
#include <unistd.h>
#endif

#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ERRO_ABRINDO_ARQUIVO		2
#define ARQUIVO_CORROMPIDO		3
#define ERRO_LENDO_ARQUIVO		4
#define ERRO_ESCREVENDO_ARQUIVO		5
#define ERRO_FECHANDO_ARQUIVO	6

#define NUMERO_ARGUMENTOS		2
#define COMPRIMENTO_BUFFER		256

int
main (int argc, char *argv[])
{
	char buffer [COMPRIMENTO_BUFFER + 1], novoNome[1024], nomeTemp[14] = "larica-XXXXXX", nomeTroca[1024];
	FILE *leitura, *escrita;
	int escritaNumero;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <arquivo-entrada>\n",  argv [0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}

	if (!(leitura = fopen (argv[1], "r"))) 
	{
		printf ("Erro abrindo o arquivo: \"%s\"\n", argv [1]);
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		exit (ERRO_ABRINDO_ARQUIVO);
	}
	
	if (!(escritaNumero = mkstemp(nomeTemp)))
	{
		printf ("Erro  criando arquivo temporario.\n");
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		exit (ERRO_ABRINDO_ARQUIVO);
	}

	if (!(escrita = fdopen(escritaNumero, "w"))) 
	{
		printf ("Erro abrindo o arquivo temporario.\n");
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		
		if (fclose(leitura))
		{
			printf ("Erro fechando arquivo %s\n", argv[1]);
			printf ("Erro (#%i): %s\n", errno, strerror (errno));
			exit (ERRO_FECHANDO_ARQUIVO);
		}
		
		exit (ERRO_ABRINDO_ARQUIVO);
	}

	while ((fgets (buffer, COMPRIMENTO_BUFFER + 1, leitura)) != NULL) 
	{
		if (buffer [strlen (buffer) - 1] == '\n')
		{	
			buffer [strlen (buffer) - 1] = '\0';
			buffer [strlen (buffer) - 1] = '\n';
		}

		fprintf (escrita, "%s", buffer);
	}

	if (ferror (leitura))
	{
		printf ("Erro lendo arquivo: \"%s\"\n", argv[1]);
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		
		if (fclose(leitura))
		{
			printf ("Erro fechando arquivo %s\n", argv[1]);
			printf ("Erro (#%i): %s\n", errno, strerror (errno));
			exit (ERRO_FECHANDO_ARQUIVO);
		}
		
		if (fclose(escrita))
		{
			printf ("Erro fechando arquivo novo");
			printf ("Erro (#%i): %s\n", errno, strerror (errno));
			exit (ERRO_FECHANDO_ARQUIVO);
		}
		
		remove (nomeTemp);
		exit (ERRO_LENDO_ARQUIVO);
	}

	if (ferror (escrita))
	{
		printf ("Erro escrevendo arquivo novo\n");
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		
		if (fclose(leitura))
		{
			printf ("Erro fechando arquivo %s\n", argv[1]);
			printf ("Erro (#%i): %s\n", errno, strerror (errno));
			exit (ERRO_FECHANDO_ARQUIVO);
		}
		
		if (fclose(escrita))
		{
			printf ("Erro fechando arquivo novo");
			printf ("Erro (#%i): %s\n", errno, strerror (errno));
			exit (ERRO_FECHANDO_ARQUIVO);
		}

		remove (nomeTemp);
		exit (ERRO_ESCREVENDO_ARQUIVO);
	}

	strcpy(nomeTroca, argv[1]);
	snprintf(novoNome, strlen(nomeTroca) + 4, "%s", strcat(nomeTroca, ".bak"));
	#ifdef MYDEBUG
	printf("\nargv[1]: %s\nnovoNome: %s\nnomeTemp: %s\n", argv[1], novoNome, nomeTemp);
	#endif
	rename(argv[1], novoNome);
	rename(nomeTemp, argv[1]);

	if (fclose(leitura))
	{
		printf ("Erro fechando arquivo %s\n", argv[1]);
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		exit (ERRO_FECHANDO_ARQUIVO);
	}
	
	if (fclose(escrita))
	{
		printf ("Erro fechando arquivo novo");
		printf ("Erro (#%i): %s\n", errno, strerror (errno));
		exit (ERRO_FECHANDO_ARQUIVO);
	}

	return OK;
}

/* $RCSfile: aula1002.c,v $ */
