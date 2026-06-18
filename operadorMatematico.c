//switch case

// Exemplo: Roda um programa que solicitar o usuário 
// a escolha das operações fundamentais +, -, *, / e 
// opera dois números quaisquer:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()    {

    printf("+ para soma:\n");
    printf("- para subtração:\n");
    printf("* para multiplicação:\n");
    printf("/ para Divisão:\n");

    char operacao;
    printf("Escolha a sua operação: ");
    scanf("%c", &operacao);

    float num1, num2, resultado;

    // 1. O grande IF que valida se a operação digitada é válida
    if(operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/')    {
        
        printf("Digite o 1° número: ");
        scanf("%f",&num1);

        printf("Digite o 2° número: ");
        scanf("%f",&num2);

        // 2. Se for válida, o switch entra em ação para decidir a conta
        switch (operacao)    {

            case '+':
                resultado = num1 + num2;
                printf("A soma será %.2f\n", resultado);
                break;

            case '-':
                resultado = num1 - num2;
                printf("A subtração será %.2f\n", resultado);
                break;

            case '*':
                resultado = num1 * num2;
                printf("A Multiplicação será %.2f\n", resultado);
                break;

            case '/':
                // Se ambos forem zero (0 / 0)
                if (num1 == 0 && num2 == 0) {
                    printf("Indeterminação matemática\n"); 
                }
                // Se apenas o denominador for zero (X / 0)
                else if (num2 == 0) {
                    printf("Impossibilidade matemática\n"); 
                }
                // Se for uma divisão válida normal
                else {
                    resultado = num1 / num2;
                    printf("O resultado da divisão será %.2f\n", resultado);
                }
                break; 
        } // Fim do switch

    } // Fim do grande IF
    else {
        printf("Operação inválida, tente novamente\n");
    }

    return 0;
}
