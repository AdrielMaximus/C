#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float horasTrabalhadas;
    float valorHora = 35.00;
    float salarioBruto, salarioLiquido, contribuicaoSindical, contribuicaoPlanoSaude;
    float totalFolhaPagamento = 0;
    float totalContribuicaoSindical = 0;
    float totalContribuicaoPlanoSaude = 0;

    while (1) {
        printf("Digite a matrícula do funcionário (ou '0' para encerrar): ");
        scanf("%d", &matricula);

        if (matricula == 0) {
            break; // Encerra o loop se a matrícula for '0'.
        }

        printf("Digite o nome do funcionário: ");
        scanf("%s", nome);

        printf("Digite o total de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        // Calcula o salário bruto
        salarioBruto = horasTrabalhadas * valorHora;

        // Calcula as contribuições
        contribuicaoSindical = salarioBruto * 0.0102; // 1.02%
        contribuicaoPlanoSaude = salarioBruto * 0.06;  // 6%

        // Calcula o salário líquido
        salarioLiquido = salarioBruto - contribuicaoSindical - contribuicaoPlanoSaude;

        totalFolhaPagamento += salarioLiquido;
        totalContribuicaoSindical += contribuicaoSindical;
        totalContribuicaoPlanoSaude += contribuicaoPlanoSaude;

        printf("\nMatrícula: %d\n", matricula);
        printf("Nome: %s\n", nome);
        printf("Horas Trabalhadas: %.2f\n", horasTrabalhadas);
        printf("Salário Bruto: R$ %.2f\n", salarioBruto);
        printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
        printf("Contribuição Sindical: R$ %.2f\n", contribuicaoSindical);
        printf("Contribuição Plano de Saúde: R$ %.2f\n", contribuicaoPlanoSaude);
        printf("-----------------------------------\n");
    }

    printf("\nTotal da Folha de Pagamento: R$ %.2f\n", totalFolhaPagamento);
    printf("Total de Contribuição Sindical: R$ %.2f\n", totalContribuicaoSindical);
    printf("Total de Contribuição Plano de Saúde: R$ %.2f\n", totalContribuicaoPlanoSaude);

    return 0;
}
