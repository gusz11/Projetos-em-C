#include <stdio.h>
#include <stdlib.h>

// Código para calcular o consumo médio de um carro.

int main(void)
{
    float km, litro, resultado;

    printf("Insira a distancia percorrida pelo seu carro e o total de combustivel gasto para descobrir o consumo medio.\n");
    printf("Distancia em Km:\n");
    scanf("%f", &km);
    printf("Gasolina utilizada em Litro:\n");
    scanf("%f", &litro);

    resultado = km / litro;
    printf("Seu carro consumiu: %.3f km/l", resultado);

    return 0;
}

