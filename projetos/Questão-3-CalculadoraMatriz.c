#include <stdio.h>
#include <string.h>

// Calculadora simples para Matriz.

struct Matriz
{
    int valores[4][4];
};

void calcularMat(struct Matriz *matA, struct Matriz *matB, struct Matriz *resposta, char operacao[5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(operacao, "soma") == 0)
            {
                resposta->valores[i][j] = matA->valores[i][j] + matB->valores[i][j];
            }
            else if (strcmp(operacao, "sub") == 0)
            {
                resposta->valores[i][j] = matA->valores[i][j] - matB->valores[i][j];
            }
            else if (strcmp(operacao, "mult") == 0)
            {
                resposta->valores[i][j] = 0;
                for (int k = 0; k < 4; k++)
                {
                    resposta->valores[i][j] += matA->valores[i][k] * matB->valores[k][j];
                }
            }
        }
    }
}

void mostrarResultado(struct Matriz resposta)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", resposta.valores[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    struct Matriz matA, matB, resposta;
    char operacao[5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matA.valores[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matB.valores[i][j]);
        }
    }

    scanf("%s", operacao);

    calcularMat(&matA, &matB, &resposta, operacao);
    mostrarResultado(resposta);

    return 0;
}
