#include <stdio.h>

int main() {
    int numero, maior = 0;

    printf("Digite uma lista de números (0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando 0 é digitado
        }

        if (numero > maior) {
            maior = numero; // Atualiza o maior número, se necessário
        }
    }

    if (maior != 0) {
        printf("O maior número lido foi: %d\n", maior);
    } else {
        printf("Nenhum número foi lido.\n");
    }

    return 0;
}
