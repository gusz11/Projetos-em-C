#include <stdio.h>

int main(void)
{
    int valor1, valor2, maior, menor;

    printf("Digite 2 valores:\n");
    scanf("%d %d", &valor1, &valor2);

    if (valor1 == valor2)
    {
        printf("Os valores lidos sao iguais\n");
        return 0;
    }
    else if (valor1 > valor2)
    {
        printf("%d eh maior que %d\n", valor1, valor2);
        maior = valor1;
        menor = valor2;
    }
    else if (valor2 > valor1)
    {
        printf("%d eh maior que %d\n", valor2, valor1);
        maior = valor2;
        menor = valor1;
    }

    if (maior % menor == 0)
    {
        printf("%d eh multiplo de %d", maior, menor);
    }
    else
    {
        printf("%d nao eh multiplo de %d", maior, menor);
    }
    return 0;
}