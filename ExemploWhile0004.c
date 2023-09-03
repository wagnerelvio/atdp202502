#include <stdio.h>
#include <stdlib.h>

// Multiplos de 3 e 5 no intervalo de 1 a 100.

int main ()
{
    int i = 0;

    while (i <=100)

    {
        i ++;
        if ( i %3 == 0 && i %5 == 0)
        {
            printf (" - Numero : %d \n", i ) ;

        }
    }

}
