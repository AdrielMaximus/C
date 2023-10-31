#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se for divisível por algum número além de 1 e ele mesmo, não é primo
        }
    }
    return 1; // Se passou por todos os testes, o número é primo
}

int main() {
    int numero, quantidadePrimos = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando o número lido for zero.
        }

        if (ehPrimo(numero)) {
            printf("%d é um número primo.\n", numero);
            quantidadePrimos++;
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    printf("Quantidade de números primos encontrados: %d\n", quantidadePrimos);

    return 0;
}