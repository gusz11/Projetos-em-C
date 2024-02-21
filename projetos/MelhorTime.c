#include <stdio.h>
#include <string.h>

// Código para descobrir qual time é melhor.

struct Jogador
{
    char nome[31];
    char posicao;
    int forca;
};

struct Time
{
    char nome[31];
    struct Jogador jogadores[11];
};

float calcularForca(struct Time time)
{
    int G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;

    for (int i = 0; i < 11; i++)
    {
        struct Jogador jogador = time.jogadores[i];
        switch (jogador.posicao)
        {
        case 'G':
            G += jogador.forca;
            break;
        case 'L':
            L += jogador.forca;
            break;
        case 'Z':
            Z += jogador.forca;
            break;
        case 'V':
            V += jogador.forca;
            break;
        case 'M':
            M += jogador.forca;
            break;
        case 'A':
            A += jogador.forca;
            break;
        }
    }

    return (8 * G + 10 * (L) + 5 * (Z) + 8 * (V) + 11 * (M) + 12 * (A)) / 100.0;
}

void mostrarResultados(struct Time time1, struct Time time2)
{
    float forcaTime1 = calcularForca(time1);
    float forcaTime2 = calcularForca(time2);

    printf("%s: %.2f de forca\n", time1.nome, forcaTime1);
    printf("%s: %.2f de forca\n", time2.nome, forcaTime2);

    if (forcaTime1 > forcaTime2)
    {
        printf("%s eh mais forte\n", time1.nome);
    }
    else if (forcaTime2 > forcaTime1)
    {
        printf("%s eh mais forte\n", time2.nome);
    }
}

int main(void)
{
    struct Time time1, time2;

    scanf(" %31[^\n]", time1.nome);
    for (int i = 0; i < 11; i++)
    {
        scanf(" %31[^;];%c;%d", time1.jogadores[i].nome, &time1.jogadores[i].posicao, &time1.jogadores[i].forca);
    }

    scanf(" %31[^\n]", time2.nome);
    for (int i = 0; i < 11; i++)
    {
        scanf(" %31[^;];%c;%d", time2.jogadores[i].nome, &time2.jogadores[i].posicao, &time2.jogadores[i].forca);
    }

    mostrarResultados(time1, time2);

    return 0;
}
