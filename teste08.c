#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int raizesReais5a10 = 0;
    int raizesComplexas = 0;
    int raizesMenores2 = 0;

    while (1) {
        printf("Digite o coeficiente 'a' (0 para encerrar): ");
        scanf("%d", &a);

        if (a == 0) {
            break; // Encerra o loop se 'a' for zero.
        }

        printf("Digite o coeficiente 'b': ");
        scanf("%d", &b);
        printf("Digite o coeficiente 'c': ");
        scanf("%d", &c);

        // Calcula o discriminante
        int discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);

            printf("Raiz 1: %.2lf\n", raiz1);
            printf("Raiz 2: %.2lf\n", raiz2);

            if (raiz1 > 5 && raiz1 < 10) {
                raizesReais5a10++;
            }

            if (raiz2 > 5 && raiz2 < 10) {
                raizesReais5a10++;
            }

            if (raiz1 < 2 && raiz2 < 2) {
                raizesMenores2++;
            }
        } else if (discriminante == 0) {
            double raiz = -b / (2 * a);
            printf("Raiz única: %.2lf\n", raiz);
        } else {
            printf("Raízes complexas.\n");
            raizesComplexas++;
        }
    }

    printf("Quantidade de raízes reais entre 5 e 10: %d\n", raizesReais5a10);
    printf("Quantidade de raízes complexas: %d\n", raizesComplexas);
    printf("Produto das raízes menores que 2: %d\n", raizesMenores2);

    return 0;
}
