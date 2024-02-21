#include <stdio.h>

int main(void)
{
    int senha, tentativa;

    printf("Crie uma senha numerica de 4 digitos:\n");
    scanf("%d", &senha);

    while (1)
    {

        printf("Digite a senha correta:\n");
        scanf("%d", &tentativa);

        if (senha == tentativa)
        {
            printf("senha valida!\n");
            break;
        }
        else
        {
            printf("senha invalida, tente novamente!\n");
        }
    }
}