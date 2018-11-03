#!/usr/bin/make -f
################################################################################
################################################################################
################################################################################

CC	= gcc
AS	= as
RM	= rm

TARGET	= calc

PHONY := all
all: binary

PHONY += binary
binary: calc

calc: main.o calculadora.o
	$(CC)  main.o calculadora.o  -o  $(TARGET)  -l m

calculadora.s:	calculadora.c calculadora.h
	$(CC)  -S  calculadora.c  -o  calculadora.s
calculadora.o:	calculadora.s
	$(AS)  calculadora.s  -o  calculadora.o

main.s:	 main.c calculadora.h
	$(CC)  -S  main.c  -o  main.s
main.o:	 main.s
	$(AS)  main.s  -o  main.o

PHONY += clean
clean:
	$(RM)  -f  calc *.o *.s


.PHONY: $(PHONY)



################################################################################
################################################################################
################################################################################
