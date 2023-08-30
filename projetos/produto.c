#include <stdio.h>
#include <stdlib.h>

//Código para calcular o produto entre 2 valores.

int main(void)
{
    int valor1, valor2, resultado;

    printf("Digite 2 valores a seguir:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    resultado = valor1 * valor2;
    printf("Produto desses valores= %d \n", resultado);

    return 0;
}
