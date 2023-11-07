#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;
    double somatorio = 0.0;

    for (int i = 1; i <= n; i++) {
        double termo = (pow(i, 2) + exp(i) * sin(2 * i));
        somatorio += termo;
    }

    printf("O somatório é: %lf\n", somatorio);

    return 0;
}
