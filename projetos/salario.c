#include <stdio.h>

int main(void)
{
    float salario, porcentagem;
    char nivel;

    printf("Digite aqui o seu nivel de experiencia para saber o seu aumento salarial.\nPara funcionarios do nivel \"a\", o aumento sera de 5%%. Para os do \"b\", 7%%. E no caso do \"c\", 8%%.\n");
    scanf("%c", &nivel);
    while (!(nivel != 'a' || nivel != 'b' || nivel != 'c'))
    {
        printf("Isso nao e um nivel valido, tente novamente:\n");
        scanf("%c", &nivel);
    }

    printf("Agora insira seu salario antigo:\n");
    scanf("%f", &salario);

    if (nivel == 'a')
    {
        porcentagem = salario * 0.05;
        salario = porcentagem + salario;
        printf("R$ %.2f", salario);
    }
    else if (nivel == 'b')
    {
        porcentagem = salario * 0.07;
        salario = porcentagem + salario;
        printf("R$ %.2f", salario);
    }
    else if (nivel == 'c')
    {
        porcentagem = salario * 0.08;
        salario = porcentagem + salario;
        printf("R$ %.2f", salario);
    }
    return 0;
}