#include <stdio.h>

unsigned long long int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        unsigned long long int fatorial = 1;
        for (int i = 2; i <= numero; i++) {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main() {
    int numero;
    
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        unsigned long long int resultado = calcularFatorial(numero);
        printf("%d! = %llu\n", numero, resultado);
    }

    return 0;
}
