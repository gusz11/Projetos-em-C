#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Código para descobrir a área de um circulo.

int main(void)
{
    double pi = 3.14159;
    double area, raio;

    printf("Para calcular a area de um circulo, e necessario usar essa formula area = pi . raio2\n");
    printf("digite o valor do raio aqui:\n");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);
    printf("A area de um circulo com o raio de %.4lf e de: %.4lf\n", raio, area);

    return 0;
}
