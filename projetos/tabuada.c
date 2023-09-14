#include <stdio.h>

// Código para descobrir a tabuada de um número.

int main(void)
{
    int resultado, valor;
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Digite um valor:\n");
    scanf("%d", &valor);

    while (!(valor >= 2 && valor <= 1000))
    {
        printf("Insira um número maior que 1 e menor que 1000:\n");
        scanf("%d", &valor);
    }

    for (int i = 0; i < 10; i++)
    {
        resultado = valor * numeros[i];
        printf("%d x %d = %d\n", numeros[i], valor, resultado);
    }

    return 0;
}
