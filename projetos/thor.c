#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparacao(char name[])
{
    if (strcmp(name, "Thor") == 0)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
}

int main(void)
{
    char name[30];
    int qnt, forca;
    printf("Quantos nomes voce deseja testar?\n");
    scanf("%d", &qnt);

    for (int i = 0; i < qnt; i++)
    {
        scanf("%s", name);
        scanf("%d", &forca);
        comparacao(name);
    }

    return 0;
}