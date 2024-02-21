#include <stdio.h>

int main(void)
{
    int valor;
    int olimpicos = 1896;
    int copa = 1930;

    printf("Digite um ano entre 1800 e 2022:\n");
    scanf("%d", &valor);

    while (!(valor >= 1800 && valor <= 2022))
    {
        printf("Tente novamente:\n");
        scanf("%d", &valor);
    }

    switch (valor)
    {
    case 1916:
        printf("Nao ocorram os Jogos Olimpicos de Verao no ano de %d devido a Primeira Guerra Mundial.\n", valor);
        return 0;
    case 1940:
        printf("Nao ocorram os Jogos Olimpicos de Verao no ano de %d devido a Segunda Guerra Mundial.\n", valor);
        return 0;
    case 1944:
        printf("Nao ocorram os Jogos Olimpicos de Verao no ano de %d devido a Segunda Guerra Mundial.\n", valor);
        return 0;
    case 2020:
        printf("Nao ocorram os Jogos Olimpicos de Verao no ano de %d devido a pandemia da COVID-19, sendo adiada para 2021.\n", valor);
        return 0;
    case 2021:
        printf("Os jogos Olimpicos de Verao ocorreram no ano de %d, sendo realizados apos a pandemia.\n", valor);
        return 0;
    case 1942:
        printf("Nao ocorreu a Copa do Mundo de Futebol no ano de %d devido a Segunda Guerra Mundial.\n", valor);
        return 0;
    case 1946:
        printf("Nao ocorreu a Copa do Mundo de Futebol no ano de %d devido a Segunda Guerra Mundial.\n", valor);
        return 0;
    }

    int encontrou = 0;

    while (olimpicos <= valor || copa <= valor)
    {

        if (valor == olimpicos)
        {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.", valor);
            encontrou++;
        }

        else if (valor == copa)
        {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", valor);
            encontrou++;
        }
        olimpicos += 4;
        copa += 4;
    }

    if (!encontrou)
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", valor);
    }

    return 0;
}