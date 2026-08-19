#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2, hipotenusa;

    // Solicita o valor do primeiro cateto
    printf("Digite o valor do primeiro cateto (CAT 1): ");
    scanf("%f", &cat1);

    // Solicita o valor do segundo cateto
    printf("Digite o valor do segundo cateto (CAT 2): ");
    scanf("%f", &cat2);

    // Calcula a hipotenusa usando a fórmula: raiz quadrada da soma dos quadrados
    hipotenusa = sqrt((cat1 * cat1) + (cat2 * cat2));

    // Exibe o resultado com duas casas decimais
    printf("\nA hipotenusa do triângulo retângulo é: %.2f\n", hipotenusa);

    return 0;
}
