#include <stdio.h>

int main(void)
{
    int vetor[10];
    int valor;



    printf("Digite 1 valor:\n");
    scanf("%d", &valor);
    vetor[0] = valor;

    for(int posicao = 0; posicao < 10; posicao++){
        vetor[posicao] = vetor[posicao - 1]*2;
    }
     for (int posicao = 0; posicao < 10; posicao++)
    {
        printf("N[%d] =  %d\n", posicao, vetor[posicao]);
    }
    return 0;
}
