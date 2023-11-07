#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;
    double result = 0.0;

    for (int i = 1; i <= n; i++) {
        double inner_sum = 0.0;
        for (int k = 3; k <= 7; k++) {
            double term = (pow(2, 3 * i + k) / (i * k + 1)) * k;
            inner_sum += term;
        }
        result += inner_sum;
    }

    printf("O resultado do somatório aninhado é: %lf\n", result);

    return 0;
}
