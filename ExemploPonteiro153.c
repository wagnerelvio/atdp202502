#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //valor eh a variavel que
  //serah apontada pelo ponteiro
  int numero = 10;

  //declaracao de variavel ponteiro
  int *ptr;

  //atribuindo o endereco da variavel valor ao ponteiro
  ptr = &numero;

  //printf("Utilizando ponteiros\n\n");
  printf ("\n\nConteudo da variavel valor: %d\n\n", numero);
  printf ("Endereco da variavel valor: %x \n\n", &numero);
  printf ("Conteudo da variavel ponteiro ptr: %x\n", ptr);

    return 0;
}
