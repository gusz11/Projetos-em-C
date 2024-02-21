#include <stdio.h>
#include <string.h>

//Lógica que transforma números romanos em numerais da base 10, 2 e 16 

int romanos(char entrada[13])
{
    int decimal = 0;

    for (int i = 0; i < strlen(entrada); i++)
    {
        if (entrada[i] == 'I')
        {
            if (entrada[i + 1] == 'V' || entrada[i + 1] == 'X')
            {
                decimal -= 1;
            }
            else
            {
                decimal += 1;
            }
        }
        else if (entrada[i] == 'X')
        {
            if (entrada[i + 1] == 'L' || entrada[i + 1] == 'C')
            {
                decimal -= 10;
            }
            else
            {
                decimal += 10;
            }
        }
        else if (entrada[i] == 'C')
        {
            if (entrada[i + 1] == 'D' || entrada[i + 1] == 'M')
            {
                decimal -= 100;
            }
            else
            {
                decimal += 100;
            }
        }
        switch (entrada[i])
        {
        case 'V':
            decimal += 5;
            break;
        case 'L':
            decimal += 50;
            break;
        case 'D':
            decimal += 500;
            break;
        case 'M':
            decimal += 1000;
            break;
        default:
            break;
        }
    }
    return decimal;
}

int main(void)
{
    int inicio = 0, binario, decimal = 0;
    char entrada[13];

    scanf("%s", entrada);

    decimal = romanos(entrada);

    printf("%s na base 2: ", entrada);
    for (int i = 31; i >= 0; i--)
    {
        binario = decimal >> i;
        if (binario & 1)
        {
            inicio = 1;
        }
        if (inicio)
        {
            if (binario & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }

    printf("\n");
    printf("%s na base 10: %d\n", entrada, decimal);
    printf("%s na base 16: %x\n", entrada, decimal);

    return 0;
}