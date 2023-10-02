#include <stdio.h>
#include <stdlib.h>
//wp-02-code-2001-tempertaura
int main()
{
    int tempertaura;

    printf("Entre com o valor do tempertaura:  ");
    scanf("%d",&tempertaura);

    if(tempertaura <40)
        printf("SEVERIDADE: RISCO MUITO BAIXO");
    else if (tempertaura >= 40   && tempertaura < 60)
        printf("SEVERIDADE: RISCO BAIXO");
    else if (tempertaura >= 60   && tempertaura < 80)
        printf("SEVERIDADE: RISCO ALERTA");
    else if (tempertaura >= 80   && tempertaura < 120)
        printf("SEVERIDADE: RISCO MEDIO");
    else if (tempertaura >= 120   && tempertaura < 170)
        printf("SEVERIDADE: RISCO MODERADO - ALERTA AMARELO");
    else if (tempertaura >= 170   && tempertaura < 200)
        printf("SEVERIDADE: RISCO ALTO - ALERTA LARANJA");
    else
        printf("SEVERIDADE: RISCO MUITO ALTO - ALERTA VERMELHO");
    return 0;
}
