#include <stdlib.h>
#include <stdio.h>>
#include <conio.h>

#define ERRO_FATORIALNEGATIVO -1234

int fatorial(int N);

int main(void){
    system("cls");
    int N;
    int F;
    printf("Digite um valor: ");
    scanf("%d", &N);
    F = fatorial(N);
    if (F != ERRO_FATORIALNEGATIVO){
    printf("Resultado: %d\n", fatorial(N));
    }
    else printf("Nao existe esse fatorial");
}

int fatorial(int N){
    int R = 1;
    if (N >= 0){
    for (int i = N; i > 0; i--)
    R = R * i;
    return (R);
    }
    else{
        return(ERRO_FATORIALNEGATIVO);
    }
}