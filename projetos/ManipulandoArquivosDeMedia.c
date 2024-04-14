#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados
{
   char nome[31]; 
   char telefone[15]; 
   char curso[31];
   float nota1;
   float nota2;   
   float media;
};

int main(void){
    FILE *SituacaoFinal, *DadosEntrada;

    SituacaoFinal = fopen("SituacaoFinal.csv", "w");
    DadosEntrada = fopen("DadosEntrada.csv", "r");

    if (SituacaoFinal == NULL || DadosEntrada == NULL) {
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    struct dados aluno;
    char linha[200]; 

    fgets(linha, sizeof(linha), DadosEntrada);
    while (fgets(linha, sizeof(linha), DadosEntrada) != NULL) {
        char *token = strtok(linha, ",");
        
        strcpy(aluno.nome, token);
        token = strtok(NULL, ",");
        strcpy(aluno.telefone, token);
        token = strtok(NULL, ",");
        strcpy(aluno.curso, token);
        token = strtok(NULL, ",");
        aluno.nota1 = atof(token);
        token = strtok(NULL, ",");
        aluno.nota2 = atof(token);

        aluno.media = (aluno.nota1 + aluno.nota2) / 2;

        if (aluno.media >= 7) {
            fprintf(SituacaoFinal, "%s,%.2f,APROVADO\n", aluno.nome, aluno.media);
        } else {
            fprintf(SituacaoFinal, "%s,%.2f,REPROVADO\n", aluno.nome, aluno.media);
        }
    }

    printf("Dados Processados.\n");
    
    fclose(SituacaoFinal);
    fclose(DadosEntrada);
    return 0;
}