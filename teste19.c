#include <stdio.h>
#include <math.h>

int main() {
    int n = 4;
    double resultado = 0;

    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= 6; i++) {
            for (int k = 3; k <= 7; k++) {
                double termo = (pow(2, j) * i + k) / (i * k + 1) * k * pow(j, i);
                resultado += termo;
            }
        }
    }

    printf("O resultado do somatório aninhado é: %lf\n", resultado);

    return 0;
}
