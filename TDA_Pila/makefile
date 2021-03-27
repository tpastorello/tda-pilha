CC=gcc
CFLAGS=-g -std=c99 -Wall -Wconversion -Wtype-limits -pedantic -Werror -o0
VFLAGS=--leak-check=full --track-origins=yes --show-reachable=yes
pilha: Pilha.c Pilha_interface.h
	$(CC) $(CFLAGS) -c Pilha.c -o Pilha.o

teste: Pilha_interface.h Pilha.o teste.c
	$(CC) $(CFLAGS) teste.c  Pilha.o -o teste_pilha

all: teste

clean:
	rm -f teste_pilha
	rm *.o                