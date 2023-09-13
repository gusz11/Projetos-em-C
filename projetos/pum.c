#include <stdio.h>

int main(void)
{
    int valor;

    printf("Insira um valor aqui:\n");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++)
    {
        printf("%d %d %d PUM\n", i, i, i);
    }
}
