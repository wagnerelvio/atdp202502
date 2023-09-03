#include <stdio.h>
#include <stdlib.h>

// Multiplos de 2 ou 3 no intervalo de 1 a 100
int main ()
{
    int i = 0;

    while (i <= 100)

    {
        i ++;
        if ( i % 2 == 0 || i %3 == 0)
        {
            printf (" - Numero : %d \n", i ) ;

        }
    }

}
