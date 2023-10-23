#include <stdio.h>
 
 int main()
 {
 float nota1, nota2, nota3, nota4, nota5, media;

 printf (" Digite o valor da sua nota 01: ");
 scanf ("%f" ,& nota1 ) ;
 printf (" Digite o valor da sua nota 02: ");
 scanf ("%f" ,& nota2 ) ;
 printf (" Digite o valor da sua nota 03: ");
 scanf ("%f" ,& nota3 ) ;
 printf (" Digite o valor da sua nota 04: ");
 scanf ("%f" ,& nota4 ) ;
 printf (" Digite o valor da sua nota 05: ");
 scanf ("%f" ,& nota5 ) ;

 /* Calculo da media das notas */
 media = ( nota1 + nota2 + nota3 + nota4 + nota5 )/5;

 printf (" ********************************************\n");
 printf ("\nO valor da media eh igual a %.2f: \n", media );

 return (0);
 }
