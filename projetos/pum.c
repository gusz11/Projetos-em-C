#include <stdio.h>

//Código que imprime uma certa quantidade de linhas baseado no numero que você digitou.

int main(void)
{
    int valor, inicio = 1;

    printf("Insira um valor aqui:\n");
    scanf("%d", &valor);

    for (int i = 0; i < valor; i++)
    {
        printf("%d %d %d PUM\n", inicio, inicio + 1, inicio + 2);
        inicio = inicio + 4;
    }
    return 0;
}