#include <stdio.h>

int main() {
    int numero, somaPares = 0, produtoImpares = 1, somaTotal = 0;

    while (1) {
        printf("Digite um número inteiro positivo (ou '0' para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop se o número for '0'.
        }

        somaTotal += numero;

        if (numero % 2 == 0) {
            printf("Número %d é par.\n", numero);
            somaPares += numero;
        } else {
            printf("Número %d é ímpar.\n", numero);
            produtoImpares *= numero;
        }
    }

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Produto dos números ímpares: %d\n", produtoImpares);
    printf("Soma de todos os números lidos: %d\n", somaTotal);

    return 0;
}
