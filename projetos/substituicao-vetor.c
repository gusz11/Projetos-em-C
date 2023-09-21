#include <stdio.h>

int main(void)
{
    int x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int valor;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &valor);
        {
            if (valor <= 0)
                x[i] = 1;
            else
                x[i] = valor;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] =  %d\n", i, x[i]);
    }
}