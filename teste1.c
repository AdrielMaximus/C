#include <stdio.h>

int main() {
    int numero, maior100 = 0, menor10 = 0, igual20 = 0, igual30 = 0, igual40 = 0, totalNumeros = 0;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        totalNumeros++;

        if (numero > 100) {
            maior100++;
            printf("O número %d é maior que 100\n", numero);
        } else if (numero < 10) {
            menor10++;
            printf("O número %d é menor que 10\n", numero);
        } else if (numero == 20 || numero == 30 || numero == 40) {
            if (numero == 20) {
                igual20++;
            } else if (numero == 30) {
                igual30++;
            } else {
                igual40++;
            }
            printf("O número %d é igual a 20, 30 ou 40\n", numero);
        } else {
            printf("O número %d não se enquadra em nenhuma categoria específica\n", numero);
        }
    }

    printf("Resumo:\n");
    printf("Números maiores que 100: %d\n", maior100);
    printf("Números menores que 10: %d\n", menor10);
    printf("Números iguais a 20: %d\n", igual20);
    printf("Números iguais a 30: %d\n", igual30);
    printf("Números iguais a 40: %d\n", igual40);
    printf("Total de números lidos: %d\n", totalNumeros);

    return 0;
}
