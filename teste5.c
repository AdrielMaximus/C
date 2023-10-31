#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    long long produto = 1;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando o número lido for zero.
        }

        if (numero > 0 && numero < 100 && numero != 10 && numero != 20 && numero != 32) {
            soma += numero;
            produto *= numero;
        }
    }

    printf("Soma dos números atendendo às condições: %d\n", soma);
    printf("Produto de todos os números lidos: %lld\n", produto);

    return 0;
}
