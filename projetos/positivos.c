#include <stdio.h>

int main(void)
{
    float numeros[6], positivos[6], media;
    int contador = 0;

    printf("Digite 6 valores:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Digite: ");
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0)
        {
            positivos[contador] = numeros[i];
            contador++;
        }
    }
    printf("%d valores positivos\n", contador);

    for (int i = 0; i < contador; i++)
    {
        media += positivos[i];
    }

    if (contador > 0)
    {
        media /= contador;
    }
    printf("Media = %.1f", media);
}