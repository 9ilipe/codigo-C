#include <stdio.h>
#include <math.h>

int main() {
    float comprimento, largura, altura, diagonal;

    printf("=== Calculadora de Diagonal de Paralelepípedo ===\n\n");

    // Solicita o valor do comprimento
    printf("Digite o valor do COMPRIMENTO: ");
    scanf("%f", &comprimento);

    // Solicita o valor da largura
    printf("Digite o valor da LARGURA: ");
    scanf("%f", &largura);

    // Solicita o valor da altura
    printf("Digite o valor da ALTURA: ");
    scanf("%f", &altura);

    // Calcula a diagonal somando o quadrado de cada dimensão e tirando a raiz
    diagonal = sqrt((comprimento * comprimento) + (largura * largura) + (altura * altura));

    // Exibe o resultado final com duas casas decimais
    printf("\nA diagonal do paralelepípedo retângulo é: %.2f\n", diagonal);

    return 0;
}
