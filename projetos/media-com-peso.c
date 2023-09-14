#include <stdio.h>
#include <math.h>

//Calculadora de média escolar, porém, com peso nas notas.

int main(void)
{
    float nota1, nota2, nota3, nota4, exame, resultado, recuperacao;

    printf("Digite 4 notas:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    printf("Sabendo que respectivamente as notas possuem um peso de 2, 3, 4 e 1. Sua média foi de: \n");

    resultado = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4) / 10;

    printf("Media: %.1f\n", resultado);

    if (resultado >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (resultado > 5.0 && resultado <= 6.9)
    {
        printf("Aluno em exame.\n");
        printf("Digite a nota do exame:\n");
        scanf("%f", &exame);
        recuperacao = (resultado + exame) / 2;
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    if (recuperacao >= 5.0)
    {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n");
    }
    return 0;
}
