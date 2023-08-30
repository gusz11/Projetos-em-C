#include <stdio.h>
#include <stdlib.h>

// Código para calcular a diferença entre 4 valores utilizando a fórmula (A * B - C * D)

int main(void)
{
    int valor1, valor2, valor3, valor4, resultado;

    printf("Digite 4 valores a seguir:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);
    printf("Valor 3:\n");
    scanf("%d", &valor3);
    printf("Valor 4:\n");
    scanf("%d", &valor4);

    resultado = valor1 * valor2 - valor3 * valor4;
    printf("DIFERENCA = %d", resultado);

    return 0;
}