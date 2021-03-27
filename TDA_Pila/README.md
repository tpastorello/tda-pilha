# PILHA TDA
* Implementação de uma pilha com tamanho dinâmico e capacidade mínima para 5 elementos.

* Quando alcançado o topo, duplica sua capacidade.

* Quando desempilhar (POP) e sua capacidade for menor que a metade do tamanho, libera uma parte da memória que está em utilização. 

## PARA COMPILAR
* Recomendo utilizar o makefile. Exemplo "$ make pilha" ou "$ make teste".

* O comando completo: gcc -g -std=c99 -Wall -Wconversion -Wtype-limits -pedantic -Werror -o0 -c Pilha.c -o Pilha.o

### MAKEFILE:
* ```make pilha```
		Compila somente a pilha.	

* ```make teste```
		Compila o teste porém o mesmo não acompanha esse exemplo.

* ```make clean```
		Limpa o diretório