#include <stdio.h>

int main() {
    int numeros[100];  // Suponha que a sequência tenha no máximo 100 números
    int numero;
    int i = 0;

    printf("Digite uma sequência de números (0 para terminar):\n");

    // Lê os números até encontrar 0 ou atingir o limite
    do {
        scanf("%d", &numero);
        numeros[i] = numero;
        i++;
    } while (numero != 0 && i < 100);

    printf("Números na ordem inversa da leitura:\n");

    // Imprime os números na ordem inversa
    for (int j = i - 1; j >= 0; j--) {
        printf("%d\n", numeros[j]);
    }

    return 0;
}
