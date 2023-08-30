#include <stdio.h>
#include <stdlib.h>

// Código para determinar quantas horas, minutos e segundos de um determinado valor em segundos.

int main(void)
{
    int valor, hora, minuto, segundo;

    printf("Insira um valor em segundos:\n");
    scanf("%d", &valor);

    hora = valor / 3600;
    valor %= 3600;

    minuto = valor / 60;
    segundo = valor % 60;

    printf("%d:%d:%d", hora, minuto, segundo);

    return 0;
}