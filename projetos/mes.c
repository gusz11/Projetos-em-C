#include <stdio.h>
#include <stdlib.h>

// Código para traduzir um mês escrito de forma numérica para a forma gramática.

int main(void)
{
    int mes;

    printf("Insira um valor entre 1 e 12:\n");
    scanf("%d", &mes);

    if (mes == 1)
    {
        printf("January");
    }
    else if (mes == 2)
    {
        printf("February");
    }
    else if (mes == 3)
    {
        printf("March");
    }
    else if (mes == 4)
    {
        printf("April");
    }
    else if (mes == 5)
    {
        printf("May");
    }
    else if (mes == 6)
    {
        printf("June");
    }
    else if (mes == 7)
    {
        printf("July");
    }
    else if (mes == 8)
    {
        printf("August");
    }
    else if (mes == 9)
    {
        printf("September");
    }
    else if (mes == 10)
    {
        printf("October");
    }
    else if (mes == 11)
    {
        printf("November");
    }
    else if (mes == 12)
    {
        printf("December");
    }
    else
    {
        printf("invalido.");
    }

    return 0;
}
