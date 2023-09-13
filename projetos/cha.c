#include <stdio.h>

int main(void)
{
    int cha, competidores[5];
    int contador = 0;

    printf("(1) o chá branco;\n(2) chá verde;\n(3) chá preto;\n(4) chá de ervas.\n\nEscolha um tipo de chá:\n");
    scanf("%d", &cha);

    while (!(cha >= 1 && cha <= 4))
    {
        printf("Escolha um chá valido:");
        scanf("%d", &cha);
    }

    printf("Escolham 5 desses chás.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite: ");
        scanf("%d", &competidores[i]);

        if (competidores[i] == cha)
        {
            contador++;
        }
        while (!(competidores[i] >= 1 && competidores[i] <= 4))
        {
            printf("Isso nao foi possivel");
            return 0;
        }
    }

    printf("%d", contador);
    return 0;
}
