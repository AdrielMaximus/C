#include <stdio.h>
#include <math.h>

int main() {
    int n = 9;
    double resultado = 0.0;

    for (int i = 1; i <= n; i++) {
        double termo = (pow(2, 3 * i) + pow(i, 2)) / (i + 1);
        resultado += termo;
    }

    printf("O resultado do somatório é: %lf\n", resultado);

    return 0;
}
