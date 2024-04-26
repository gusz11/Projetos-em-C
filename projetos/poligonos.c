#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float X;
    float Y;
} Ponto;

float AreaTriangulo(Ponto A, Ponto B, Ponto C) { // função para triangulos
    return fabs((A.X * (B.Y - C.Y) + B.X * (C.Y - A.Y) + C.X * (A.Y - B.Y)) / 2.0);
}

float AreaFiguraDecomposta(Ponto lados[], int n) {  // função para triangulos com mais lados, usando a decomposição
    float areaTotal = 0.0;
    Ponto A = lados[0];
    for (int i = 1; i < n - 1; i++) {
        Ponto B = lados[i];
        Ponto C = lados[i + 1];
        areaTotal += AreaTriangulo(A, B, C);
    }
    return areaTotal;
}

void MostrarResultado(Ponto lados[], int n) {
    float resultado = AreaFiguraDecomposta(lados, n);
    printf("A area do poligono e %.0f\n", resultado); 
}

int main(void) {
    FILE *Arquivo;

    Arquivo = fopen("TrianguloABC.txt", "r"); // apenas para leitura

    if (Arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    Ponto Dado[100]; 
    int NumeroVertices;

    fscanf(Arquivo, "%d", &NumeroVertices);

    for (int i = 0; i < NumeroVertices; i++) {
        fscanf(Arquivo, "%f %f", &Dado[i].X, &Dado[i].Y);
    }

    fclose(Arquivo);

    MostrarResultado(Dado, NumeroVertices);

    return 0;
}