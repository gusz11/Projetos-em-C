#include <stdio.h>

int main(void)
{
    int valor1, valor2, valor3, maior;

    printf("Digite 3 valores:\n");
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    printf("Valor 3: ");
    scanf("%d", &valor3);

    if (valor1 >= valor2 && valor1 >= valor3)
    {
        maior = valor1;
    }
    else if (valor2 >= valor1 && valor2 >= valor3)
    {
        maior = valor2;
    }
    else
    {
        maior = valor3;
    }

    printf("%d eh o maior.\n", maior);

    return 0;
}