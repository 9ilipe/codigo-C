// Rodar um programa que calcula equação de 2° grau escrita na forma ax² + bx + c = 0.

//A Lógica do Delta e de BhaskaraPara o computador calcular isso do jeito certo, precisamos analisar três situações para o Delta:Delta negativo ($\Delta < 0$): Não existem raízes reais (o programa avisa e para).Delta zero ($\Delta = 0$): Existe apenas uma raiz real (ou duas raízes iguais).Delta positivo ($\Delta > 0$): Existem duas raízes reais e diferentes.Para calcular a raiz quadrada em C, usamos a função sqrt() (que vem da biblioteca <math.h>). A função sqrt() recebe um número e retorna a raiz quadrada desse número. Por exemplo, sqrt(9) retorna 3, e sqrt(16) retorna 4. Se o número for negativo, a função retorna NaN (Not a Number), indicando que não é possível calcular a raiz quadrada de um número negativo no conjunto dos números reais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()    {

    printf("Calcular a equacao de 2° grau escrita na forma ax² + bx + c = 0.\n\n");

    float a, b, c, delta, x1, x2;
            
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // 1. Validação obrigatória: 'a' não pode ser 0
    if (a == 0)    {
        printf("\n[ERRO] O valor de a nao pode ser zero! Nao e uma equacao de 2° grau.\n");
        return 0; // Encerra o programa aqui
    }

    // 2. Cálculo do Delta (b² - 4ac)
    delta = (b * b) - (4 * a * c);
    printf("\nO valor de Delta (esperado) e: %.2f\n", delta);

    // 3. Análise do Delta para calcular as raízes
    if (delta < 0) {
        printf("Esta equacao nao possui raizes reais (Delta e negativo).\n");
    } 
    else if (delta == 0) {
        // Se delta é 0, a raiz de delta é 0, então a fórmula simplifica
        x1 = -b / (2 * a);
        printf("A equacao possui uma unica raiz real: x = %.2f\n", x1);
    } 
    else {
        // Delta positivo: calcula x1 e x2 usando sqrt() para a raiz quadrada
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("A equacao possui duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
