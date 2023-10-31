#include <stdio.h>

int main() {
    int numero;
    int somaMenor150Maior50 = 0;
    int produtoDiferente10Maior5Menor70 = 1;
    int totalNumeros = 0;
    int somaQuadradosMaior16 = 0;
    int produtoMaior20Menor30 = 1;
    float media = 0;

    while (1) {
        printf("Digite um número (99, 0 ou 14 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 99 || numero == 0 || numero == 14) {
            break; // Encerra o loop quando os números de parada são inseridos.
        }

        totalNumeros++;
        media += numero;

        if (numero < 150 && numero > 50) {
            somaMenor150Maior50 += numero;
        }

        if (numero != 10 && numero > 5 && numero < 70) {
            produtoDiferente10Maior5Menor70 *= numero;
        }

        if (numero > 16) {
            somaQuadradosMaior16 += numero * numero;
        }

        if (numero > 20 && numero < 30) {
            produtoMaior20Menor30 *= numero;
        }
    }

    if (totalNumeros > 0) {
        media /= totalNumeros;
    }

    printf("Soma dos números menores que 150 e maiores que 50: %d\n", somaMenor150Maior50);
    printf("Produto dos números diferentes de 10, maiores que 5 e menores que 70: %d\n", produtoDiferente10Maior5Menor70);
    printf("Média dos números lidos: %.2f\n", media);
    printf("Produto dos números maiores que 20 e menores que 30: %d\n", produtoMaior20Menor30);
    printf("Soma dos quadrados dos números maiores que 16: %d\n", somaQuadradosMaior16);

    return 0;
}