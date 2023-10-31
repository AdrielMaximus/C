#include <stdio.h>

int main() {
    int numero;
    int ordem = 1; // Variável para acompanhar a ordem de digitação
    long long produto = 1;
    long long somaQuadrados = 0;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop quando o número lido for zero.
        }

        // Verifica se o número é igual à sua ordem de digitação
        if (numero == ordem) {
            produto *= numero;
        }

        // Calcula o quadrado do número e o adiciona à soma dos quadrados
        somaQuadrados += (long long)numero * numero;

        ordem++; // Incrementa a ordem de digitação
    }

    printf("Produto dos números cujo valor é igual à sua ordem de digitação: %lld\n", produto);
    printf("Soma dos quadrados de todos os números lidos: %lld\n", somaQuadrados);

    return 0;
}
