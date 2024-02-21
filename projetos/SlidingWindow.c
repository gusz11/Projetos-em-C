#include <stdio.h>

// Código SlidingWindow.

void loop(int numeros[10], int valores[9], int tamanho)
{
    for (int fileira = 1; fileira <= tamanho - 1; fileira++)
    {
        for (int i = 0; i < tamanho - fileira; i++)
        {
            valores[i] = numeros[i] + numeros[i + 1];
        }
        for (int i = 0; i < tamanho - fileira; i++)
        {
            printf("%d", valores[i]);
            if (i < tamanho - fileira - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
        for (int i = 0; i < tamanho - fileira; i++)
        {
            numeros[i] = valores[i];
        }
    }
}

int main(void)
{
    int numeros[10], valores[9];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", numeros[i]);
        if (i < 9)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    loop(numeros, valores, 10);

    return 0;
}
