#include <stdio.h>

int main() {
    int numero;
    int menor = 0;
    int soma_maior_10 = 0;
    int produto_maior_200 = 1;
    int primeiro_numero = 1; // Flag para controlar o primeiro número

    printf("Digite números (digite 0 para sair):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (primeiro_numero) {
            menor = numero;
            primeiro_numero = 0;
        } else if (numero < menor) {
            menor = numero;
        }

        if (numero > 10) {
            soma_maior_10 += numero;
        }

        if (numero > 200) {
            produto_maior_200 *= numero;
        }
    }

    if (primeiro_numero) {
        printf("Nenhum número foi digitado.\n");
    } else {
        printf("O menor número digitado é: %d\n", menor);
        printf("A soma dos números maiores do que 10 é: %d\n", soma_maior_10);
        printf("O produto dos números maiores do que 200 é: %d\n", produto_maior_200);
    }

    return 0;
}
