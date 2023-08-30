#include <stdio.h>
#include <stdlib.h>

// Código para calcular a média escolar de um aluno, tendo em vista que a média é 7.

int main(void)
{
    float nota1, nota2, nota3, media;
    printf("Aqui você calculará a sua média bimestral, para isso.\n");
    printf("Digite 3 notas:\n");

    printf("Nota 1:\n");
    scanf("%f", &nota1);

    printf("Nota 2:\n");
    scanf("%f", &nota2);

    printf("Nota 3:\n");
    scanf("%f", &nota3);

    printf("Média:\n");
    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua média é: %.2f.\nPara passar você precisa tirar 7.\n", media);
    printf("Logo, você: ");

    if (media >= 7)
    {
        printf("Passou!!\n");
    }
    else if (media > 4.0 && media <= 6.9)
    {
        printf("Recuperação!!\n");
    }
    else
    {
        printf("Reprovou!!\n");
    }

    return 0;
}
