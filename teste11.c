#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Digite um número inteiro positivo (ou '0' para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop se o número for '0'.
        }

        if (numero < 0) {
            printf("Por favor, insira um número inteiro positivo.\n");
            continue;
        }

        // Verifica se o último dígito é 0 ou 2 (para números pares)
        if (numero % 10 == 0 || numero % 10 == 2) {
            printf("O número %d é par.\n", numero);
        } else {
            printf("O número %d é ímpar.\n", numero);
        }
    }

    return 0;
}
