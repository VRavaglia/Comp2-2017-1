 
# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/1
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Victor Raposo Ravaglia de Oliveira
	
# $Author: victor.oliveira $
# $Date: 2017/05/13 14:10:11 $
# $Log: Makefile,v $
# Revision 1.34  2017/05/13 14:10:11  victor.oliveira
# Adicionado suporte para aula0903
#
# Revision 1.33  2017/05/12 00:44:20  victor.oliveira
# Adicionado suporte para aula0902
#
# Revision 1.32  2017/05/05 00:52:36  victor.oliveira
# Adicionado suporte para aula0806b
#
# Revision 1.31  2017/05/05 00:37:53  victor.oliveira
# Adicionado suporte para aula0806a
#
# Revision 1.30  2017/05/05 00:03:46  victor.oliveira
# Adicionado suporte para aula0805b
#
# Revision 1.29  2017/05/04 23:46:57  victor.oliveira
# Adicionado suporte para aula0805a
#
# Revision 1.28  2017/05/04 22:47:59  victor.oliveira
# Adicionado suporte para aula0803b
#
# Revision 1.27  2017/05/04 20:16:08  victor.oliveira
# Adicionado suporte para aula0803a
#
# Revision 1.26  2017/05/04 19:25:13  victor.oliveira
# Adicionado suporte para aula0802b
#
# Revision 1.25  2017/05/04 18:37:59  victor.oliveira
# Adicionado suporte para aula0802a
#
# Revision 1.24  2017/05/04 15:51:17  victor.oliveira
# Adicionado suporte para aula 07
#
# Revision 1.23  2017/04/21 02:26:33  mncd-
# Adicionado suporte para aula06.
#
# Revision 1.22  2017/04/13 22:22:01  victor.oliveira
# Adicionado suporte a aula0502e
#
# Revision 1.21  2017/04/13 21:37:49  victor.oliveira
# Adicionado suporte para aula0502d
#
# Revision 1.20  2017/04/13 21:33:41  victor.oliveira
# Adicionado suporte para aula0501c.c
#
# Revision 1.19  2017/04/13 21:27:40  victor.oliveira
# Adicionado suporte para aula0501b.c
#
# Revision 1.18  2017/04/13 21:09:12  victor.oliveira
# Adicionado suporte para aula0501a
# Adicionado suporte para libmatematica.a
# Criado MACRO LIBS
#
# Revision 1.17  2017/04/06 23:00:56  victor.oliveira
# Adicionado suporte para aula0402d
#
# Revision 1.16  2017/04/06 22:57:49  victor.oliveira
# Adicionado suporte para aula0402c
#
# Revision 1.15  2017/04/06 22:52:58  victor.oliveira
# Adicionado suporte para aula0402b
#
# Revision 1.14  2017/04/06 17:53:23  victor.oliveira
# Adicinado suporte para aula0402
#
# Revision 1.13  2017/03/30 16:30:08  victor.oliveira
# Adicionado suporte para aula0302d.
#
# Revision 1.12  2017/03/30 16:25:07  victor.oliveira
# Adicionado suporte para aula0302c.
#
# Revision 1.11  2017/03/30 16:09:21  victor.oliveira
# Adicionado suporte a aula0302b.
#
# Revision 1.10  2017/03/30 15:24:22  victor.oliveira
# Adicionado suporte a aula0302a.
#
# Revision 1.9  2017/03/28 20:40:15  victor.oliveira
# Adicionado suporte para aula0202d
# corrigido erro nos OBJS.
#
# Revision 1.8  2017/03/27 16:50:54  victor.oliveira
# Adicionado suporte para aula0202c.
#
# Revision 1.7  2017/03/27 16:48:09  victor.oliveira
# Adicionado suporte para aula0202b.
#
# Revision 1.6  2017/03/27 16:44:09  victor.oliveira
# Adicionad suporte para Aula02
# e aula0202a.
#
# Revision 1.5  2017/03/18 22:49:32  victor.oliveira
# Adicionados a macro e o rotulo referentes
# ao arquivo aula0105.c
#
# Revision 1.4  2017/03/18 21:37:00  victor.oliveira
# Adicionados o macro e rotulo referentes ao
# arquivo aula0104.c
#
# Revision 1.3  2017/03/18 21:19:04  victor.oliveira
# Adicionado o macro referente ao arquivo aula0103.c
#
#
# Revision 1.2  2017/03/18 19:28:12  victor.oliveira
# Adicionado o rotulo referente ao arquivo
# aula0102.c
# Corrigido o rotulo aula01
#
# Revision 1.1  2017/03/18 19:04:21  victor.oliveira
# Initial revision
# 


CC = gcc
LD = gcc

CFLAGS = -ansi -Wall -std=c99
LFLAGS = -ansi -Wall

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o

AULA0202AOBJS = aula0202.o aula0201a.o
AULA0202BOBJS = aula0202.o aula0201b.o
AULA0202COBJS = aula0202.o aula0201c.o
AULA0202DOBJS = aula0202.o aula0201d.o

AULA0302AOBJS = aula0302.o aula0301a.o
AULA0302BOBJS = aula0302.o aula0301b.o
AULA0302COBJS = aula0302.o aula0301c.o
AULA0302DOBJS = aula0302.o aula0301d.o

AULA0402AOBJS = aula0402.o aula0401a.o
AULA0402BOBJS = aula0402.o aula0401b.o
AULA0402COBJS = aula0402.o aula0401c.o
AULA0402DOBJS = aula0402.o aula0401d.o

AULA0502AOBJS = aula0502.o aula0501a.o
AULA0502BOBJS = aula0502.o aula0501b.o
AULA0502COBJS = aula0502.o aula0501c.o
AULA0502DOBJS = aula0502.o aula0501d.o
AULA0502EOBJS = aula0502.o aula0501e.o

AULA0602OBJS = aula0602.o aula0601.o

AULA0702OBJS = aula0702.o aula0701.o

AULA0802AOBJS = aula0801.o aula0802a.o
AULA0802BOBJS = aula0801.o aula0802b.o
AULA0803AOBJS = aula0801.o aula0803a.o
AULA0803BOBJS = aula0801.o aula0803b.o
AULA0805AOBJS = aula0804.o aula0805a.o
AULA0805BOBJS = aula0804.o aula0805b.o
AULA0806AOBJS = aula0804.o aula0806a.o
AULA0806BOBJS = aula0804.o aula0806b.o

AULA0902OBJS = aula0901.o aula0902.o
AULA0903OBJS = aula0901.o aula0903.o

LIBMATEMATICAOBJS = aula0401a.o

AULA01 = aula0101\
	aula0102\
	aula0103\
	aula0104\
	aula0105

AULA02 = aula0202a\
	aula0202b\
	aula0202c\
	aula0202d

AULA03 = aula0302a\
		 aula0302b\
		 aula0302c\
		 aula0302d

AULA04 = aula0402a\
		 aula0402b\
		 aula0402c\
		 aula0402d

AULA05 = aula0502a\
		 aula0502b\
		 aula0502c\
		 aula0502d\
		 aula0502e

AULA06 = aula0602

AULA07 = aula0702

AULA08 = aula0802a\
		 aula0802b\
		 aula0803a\
		 aula0803b\
		 aula0805a\
		 aula0805b\
		 aula0806a\
		 aula0806b

AULA09 = aula0902\
	aula0903


EXECS = $(AULA01)\
	$(AULA02)\
	$(AULA03)\
	$(AULA04)\
	$(AULA05)\
	$(AULA06)\
	$(AULA07)\
	$(AULA08)\
	$(AULA09)
	

LIBMATEMATICA = libmatematica.a

LIBS = $(LIBMATEMATICA)

# Regra Implicita


.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS) $(LIBS)

aula01: $(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)	

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)	

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)	

aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)	

aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)


aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)						
	
aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)						


aula03: $(AULA03)

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)

aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)


aula04: $(AULA04)

aula0402a: $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)

aula0402b: $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)

aula0402c: $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)

aula0402d: $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)


aula05: $(AULA05)

aula0502a: $(LIBMATEMATICA) $(AULA0502AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) $(LIBMATEMATICA)

aula0502b: $(LIBMATEMATICA) $(AULA0502BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) $(LIBMATEMATICA)

aula0502c: $(LIBMATEMATICA) $(AULA0502COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) $(LIBMATEMATICA)

aula0502d: $(LIBMATEMATICA) $(AULA0502DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) $(LIBMATEMATICA)		

aula0502e: $(AULA0502EOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502EOBJS) -lm


aula06: $(AULA06)

aula0602: $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS)


aula07: $(AULA07)

aula0702: $(AULA0702OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0702OBJS)


aula08: $(AULA08)

aula0802a: $(AULA0802AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802AOBJS)
	
aula0802b: $(AULA0802BOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0802BOBJS)

aula0803a: $(AULA0803AOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0803AOBJS)

aula0803b: $(AULA0803BOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0803BOBJS)

aula0805a: $(AULA0805AOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0805AOBJS)

aula0805b: $(AULA0805BOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0805BOBJS)

aula0806a: $(AULA0806AOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0806AOBJS)

aula0806b: $(AULA0806BOBJS)	
	$(LD) $(LFLAGS) -o $@ $(AULA0806BOBJS)


aula09: $(AULA09)

aula0902: $(AULA0902OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0902OBJS)

aula0903: $(AULA0903OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0903OBJS)	


libmatematica.a: $(LIBMATEMATICAOBJS)
	ar -r $@ $(LIBMATEMATICAOBJS)

clean:
	rm -f *.o $(EXECS) $(LIBS)

#$RCSfile: Makefile,v $
