#include <stdio.h>
#include <stdlib.h>

// Código para descobrir a soma de impares consecutivos.

int main(void)
{
    int valor1, valor2, maior, menor, soma;
    soma = 0;

    printf("Digite um 2 valores:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if (valor1 > valor2)
    {
        maior = valor1;
        menor = valor2;
    }
    else if (valor2 > valor1)
    {
        maior = valor2;
        menor = valor1;
    }
    else
    {
        maior = valor1;
        menor = valor2;
    }

    for (int valorAtual = menor + 1; valorAtual < maior; valorAtual++)
    {
        // checando se valorAtual é ímpar
        if (abs(valorAtual) % 2 == 1)
        {
            soma = soma + valorAtual;
        }
    }

    printf("%d\n", soma);
    return 0;
}