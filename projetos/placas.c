#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Código para verificar se o seu carro esta dentro do rodízio.

struct InfoVeiculo {
    char placa[9];
    char diaSemana[20];
};

int validarPlaca(char p[]) {
    if (strlen(p) == 8) {
        if (isalpha(p[0]) && isalpha(p[1]) && isalpha(p[2]) && p[3] == '-' &&
            isdigit(p[4]) && isdigit(p[5]) && isdigit(p[6]) && isdigit(p[7])) {
            return 1;
        }
    } else if (strlen(p) == 7) {
        if (isalpha(p[0]) && isalpha(p[1]) && isalpha(p[2]) && isdigit(p[3]) &&
            isalpha(p[4]) && isdigit(p[5]) && isdigit(p[6])) {
            return 1;
        }
    }
    return 0;
}

int validarDiaSemana(char d[]) {
    if (strcmp(d, "SEGUNDA-FEIRA") == 0 || strcmp(d, "TERCA-FEIRA") == 0 || strcmp(d, "QUARTA-FEIRA") == 0 ||
        strcmp(d, "QUINTA-FEIRA") == 0 || strcmp(d, "SEXTA-FEIRA") == 0 || strcmp(d, "SABADO") == 0 ||
        strcmp(d, "DOMINGO") == 0) {
        return 1;
    }
    return 0;
}

void processVeiculo(struct InfoVeiculo veiculo) {
    int pc = 0, dc = 0;

    if (validarPlaca(veiculo.placa)) {
        pc++;
    }
    if (validarDiaSemana(veiculo.diaSemana)) {
        dc++;
    }

    int pe = 0, de = 0;

    if (!validarPlaca(veiculo.placa)) {
        pe++;
    }

    if (!validarDiaSemana(veiculo.diaSemana)) {
        de++;
    }

    if (pe == 1 && dc == 1) {
        printf("Placa invalida\n");
    } else if (pc == 1 && de == 1) {
        printf("Dia da semana invalido\n");
    } else if (pe == 1 && de == 1) {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
    } else {
        int ud = veiculo.placa[strlen(veiculo.placa) - 1] - '0';

        if ((strcmp(veiculo.diaSemana, "SABADO") == 0)) {
            printf("Nao ha proibicao no fim de semana\n");
        } else if ((strcmp(veiculo.diaSemana, "DOMINGO") == 0)) {
            printf("Nao ha proibicao no fim de semana\n");
        }

        int segunda = 0, terca = 0, quarta = 0, quinta = 0, sexta = 0, sabado = 0, domingo = 0;

        if (strcmp(veiculo.diaSemana, "SEGUNDA-FEIRA") == 0) {
            segunda++;
        } else if (strcmp(veiculo.diaSemana, "TERCA-FEIRA") == 0) {
            terca++;
        } else if (strcmp(veiculo.diaSemana, "QUARTA-FEIRA") == 0) {
            quarta++;
        } else if (strcmp(veiculo.diaSemana, "QUINTA-FEIRA") == 0) {
            quinta++;
        } else if (strcmp(veiculo.diaSemana, "SEXTA-FEIRA") == 0) {
            sexta++;
        } else if (strcmp(veiculo.diaSemana, "SABADO") == 0) {
            sabado++;
        } else if (strcmp(veiculo.diaSemana, "DOMINGO") == 0) {
            domingo++;
        } else {
            printf("Dia da semana invalido");
        }

        if (segunda == 1 && (ud == 0 || ud == 1)) {
            printf("%s nao pode circular segunda-feira\n", veiculo.placa);
        } else if (segunda == 1 && (ud != 0 || ud != 1)) {
            printf("%s pode circular segunda-feira\n", veiculo.placa);
        } else if (terca == 1 && (ud == 2 || ud == 3)) {
            printf("%s nao pode circular terca-feira\n", veiculo.placa);
        } else if (terca == 1 && (ud != 2 || ud != 3)) {
            printf("%s pode circular terca-feira\n", veiculo.placa);
        } else if (quarta == 1 && (ud == 4 || ud == 5)) {
            printf("%s nao pode circular quarta-feira\n", veiculo.placa);
        } else if (quarta == 1 && (ud != 4 || ud != 5)) {
            printf("%s pode circular quarta-feira\n", veiculo.placa);
        } else if (quinta == 1 && (ud == 6 || ud == 7)) {
            printf("%s nao pode circular quinta-feira\n", veiculo.placa);
        } else if (quinta == 1 && (ud != 6 || ud != 7)) {
            printf("%s pode circular quinta-feira\n", veiculo.placa);
        } else if (sexta == 1 && (ud == 8 || ud == 9)) {
            printf("%s nao pode circular sexta-feira\n", veiculo.placa);
        } else if (sexta == 1 && (ud != 8 || ud != 9)) {
            printf("%s pode circular sexta-feira\n", veiculo.placa);
        }
    }
}

int main() {
    struct InfoVeiculo veiculo;

    scanf("%s", veiculo.placa);
    scanf("%s", veiculo.diaSemana);

    processVeiculo(veiculo);

    return 0;
}
