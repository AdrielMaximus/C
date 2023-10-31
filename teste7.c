#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int raizesNaoReais = 0;

    while (1) {
        printf("Digite os coeficientes da equação de segundo grau (a, b, c) separados por espaços (ou 0 0 0 para encerrar): ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            break; // Encerra o loop quando o terno for nulo.
        }

        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            // Duas raízes reais distintas
            double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Duas raízes reais distintas: %.2lf e %.2lf\n", raiz1, raiz2);
        } else if (discriminante == 0) {
            // Duas raízes reais iguais
            double raiz = -b / (2 * a);
            printf("Duas raízes reais iguais: %.2lf\n", raiz);
        } else {
            // Raízes complexas (não reais)
            raizesNaoReais++;
            printf("Raízes complexas (não reais)\n");
        }
    }

    printf("Quantidade de raízes não reais: %d\n", raizesNaoReais);

    return 0;
}
