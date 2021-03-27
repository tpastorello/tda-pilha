#include "pilhaPublico.h"
#include <stdio.h>

int main(){

  pilha_t* pilha = Init();

  char elemento1 = 'A';
  Push(pilha, &elemento1);
  printf("Tamanho pilha: %i\n", Size(pilha));
  char elemento2 = 'A';
  Push(pilha, &elemento2);
  char elemento3 = 'H';
  Push(pilha, &elemento3);
  printf("Tamanho pilha: %i\n", Size(pilha));
  char elemento4 = 'L';
  Push(pilha, &elemento4);
  char elemento5 = 'I';
  Push(pilha, &elemento5);
  printf("Tamanho pilha: %i\n", Size(pilha));
  char elemento6 = 'P';
  Push(pilha, &elemento6);


  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));
  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));
  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));
  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));
  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));
  printf("%c\n", *(char*)Top(pilha));
  Pop(pilha);
  printf("Tamanho pilha: %i\n", Size(pilha));

  Destroy(pilha);
  return 0;
}