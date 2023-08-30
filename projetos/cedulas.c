#include <stdio.h>
#include <stdlib.h>

// Código para contar a quantia de notas e quais notas são utilizadas em um determinado valor.

int main(void)
{
    int valor, notas;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    printf("Digite um Valor:\n");
    scanf("%d", &valor);

    for (int i = 0; i < 7; i++)
    {
        notas = valor / cedulas[i];
        valor %= cedulas[i];
        printf("%d notas(s) de R$ %d,00\n", notas, cedulas[i]);
    }

    return 0;
}