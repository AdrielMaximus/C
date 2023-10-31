#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    int totalAlunos = 0;
    float somaNotas = 0;
    float mediaGeral = 0;

    while (1) {
        printf("Digite o nome do aluno (ou '0' para encerrar): ");
        scanf("%s", nome);

        if (nome[0] == '0') {
            break; // Encerra o loop se o nome for '0'.
        }

        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite as três notas do aluno (ou '0' para encerrar): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        if (nota1 == 0 || nota2 == 0 || nota3 == 0) {
            break; // Encerra o loop se alguma nota for '0'.
        }

        totalAlunos++;
        float media = (nota1 + nota2 + nota3) / 3;
        somaNotas += media;
        mediaGeral = somaNotas / totalAlunos;

        printf("\nNome: %s\n", nome);
        printf("Matrícula: %d\n", matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média: %.2f\n", media);

        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
        printf("-----------------------------------\n");
    }

    if (totalAlunos > 0) {
        printf("\nTotal de alunos: %d\n", totalAlunos);
        printf("Média de notas da turma: %.2f\n", mediaGeral);
    } else {
        printf("Nenhum aluno foi registrado.\n");
    }

    return 0;
}
