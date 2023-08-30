#include <stdio.h>
#include <stdlib.h>

// Código para calcular a quantidade de anos, meses e dias de um determinado valor.

int main(void){
    int idade, ano, mes, dia;

    printf("Digite um Valor:\n");
    scanf("%d", &idade);

    ano = idade / 365;
    idade %= 365;

    mes = idade / 30;
    dia = idade % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}