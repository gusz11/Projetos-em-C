#include <stdio.h>
#include <stdlib.h>

int main(void){
    int valor1, valor2, valor3, maior;

    printf("Digite 3 valores:\n");
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    printf("Valor 3: ");
    scanf("%d", &valor3);

    maior = (valor1 + valor2 + abs(valor1 - valor2)) / 2;
    maior = (maior + valor3 + abs(maior - valor3)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
