#include <stdio.h>

// Código que mostra a saída de numeros pares do 1 ao 100.

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
