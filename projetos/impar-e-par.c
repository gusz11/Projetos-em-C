#include <stdlib.h>

int main(void)
{
    int valor, digito, soma = 0;

    printf("Insira um valor inteiro:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0)
    {
        printf("%d eh par\n", valor);
    }
    else
    {
        printf("%d eh impar\n", valor);
    }

    printf("A soma dos algarismos de %d ", valor);
    while (valor > 0)
    {
        digito = valor % 10;
        soma += digito;
        valor /= 10;
    }

    printf("eh %d", soma);
}