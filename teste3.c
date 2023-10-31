
#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando o número lido for zero.
        }

        soma += numero;
        quantidade++;
    }

    printf("Soma dos números lidos: %d\n", soma);
    printf("Quantidade de números lidos: %d\n", quantidade);

    return 0;
}
