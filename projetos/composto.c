#include <stdio.h>
#include <math.h>

//Representação de juros composto

int main(void)
{
    int tempo;
    double taxa, aporte, resposta;

    scanf("%d", &tempo);
    scanf("%lf", &aporte);
    scanf("%lf", &taxa);

    for (int i = 0; i < tempo; i++)
    {
        resposta = aporte * (1 + taxa) * ((pow(1 + taxa, i + 1) - 1) / taxa);
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i + 1, resposta);
    }

    return 0;
}
