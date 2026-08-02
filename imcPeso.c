#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
    // Declaração de variáveis
    float massa, altura, imc;

    printf("--- CALCULO DO INDICE DE MASSA CORPORAL ---\n");

    // Entrada de dados: Peso
    printf("Informe a sua massa (Kg): ");
    scanf("%f", &massa);

    // Entrada de dados: Altura
    printf("Informar sua altura (m): ");
    scanf("%f", &altura);

    // Cálculo do IMC: Peso dividido pelo quadrado da altura
    imc = massa / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);

    // Estrutura de decisão (Condicionais)
    if (imc < 18.5) {
        printf("VOCE ESTA NA CAPA (Abaixo do peso)!\n");
    } 
    else if (imc > 24.9) {
        printf("VOCE ESTA IGUAL AO ANDRE (Acima do peso)!\n");
    } 
    else {
        printf("VOCE ESTA NORMAL.\n");
    }

    return 0;
}
