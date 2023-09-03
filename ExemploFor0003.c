#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C,
que imprima na tela os números que são multiplos de 6 no intervalo de 1 a 100.
*/

int main ()
{
    int i ;
    printf ("Os numeros multiplos de 6 entre 1 e 100 , sao estes : \n\n") ;
    for ( i =6; i <= 100; i +=6)
        printf (" - %2d\n",i ) ;
    return 0;
}
