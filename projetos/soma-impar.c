#include <stdio.h>

int main(void)
{
    int numero1, numero2, resultado;
    printf("Digite um valor");
    scanf("%d", &numero1);
    printf("Digite um valor");
    scanf("%d", &numero2);

    if (numero1 && numero2 % 2 != 0)
    {
        resultado = numero1 + numero2;
        printf("%d\n", resultado);
    }
    else if (numero1 % 2 != 0)
    {
        printf("%d\n", numero1);
    }
    else if (numero2 % 2 != 0)
    {
        printf("%d", numero2);
    }
}