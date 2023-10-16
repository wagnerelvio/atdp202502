#include <stdio.h>
#include <stdlib.h>

#define Q '#'
#define V ' '


// Programa -- funcao - 203 - 10/10/2023

 // Inicio da funcao imagem
 void imagem ()
 {
 printf ("%c%c%c%c%c%c%c%c\n", Q ,Q ,Q ,Q ,Q ,Q ,Q , Q ) ;
 printf ("%c%c%c%c%c%c%c%c\n", Q ,V ,Q ,Q ,Q ,Q ,V , Q ) ;
 printf ("%c%c%c%c%c%c%c%c\n", Q ,V ,Q ,Q ,Q ,Q ,V , Q ) ;
 printf ("%c%c%c%c%c%c%c%c\n", Q ,Q ,Q ,Q ,Q ,Q ,Q , Q ) ;
 printf ("\n") ;
 }
 // Uso do metodo main e que faz o uso da funcao imagem
 int main ()
 {
 imagem () ;// Fazendo o uso da funcao imagem pela primeira vez;
 imagem () ;// Fazendo o uso da funcao imagem pela segunda vez;
 return 0;
 }
