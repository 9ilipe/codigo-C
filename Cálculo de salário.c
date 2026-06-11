//Exercício: Rodar um programa que o usuário 
//escolha os benefícios ou impostos sobre o 
//salário e calcula eles mostrando para o 
//usuário:

//Imposto de Renda — 5%
//INSS — 11%
//FGTS — 8%
//Sindicato — 1%
//Transporte — 6%
//Plano Saúde — 9%

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    printf("Digite 1 para Imposto de renda - 5%%\n");
    printf("Digite 2 para INSS - 11%%\n");
    printf("Digite 3 para FGTS - 8%%\n");
    printf("Digite 4 para Sindicato - 1%%\n");
    printf("Digite 5 para Transporte - 6%%\n");
    printf("Digite 6 para Plano de saúde - 9%%\n");

    char opcao;
    printf("\nEscolha o que quer calcular: ");
    scanf("%c", &opcao);

    float salario, resultado;
    printf("Digite o valor do seu salário R$ ");
    scanf("%f", &salario);

    // --- VALIDAÇÃO DA OPÇÃO (IF / ELSE) ---
    // Se a opção estiver entre '1' e '6', o programa roda normalmente
    if (opcao >= '1' && opcao <= '6') {
        
        switch (opcao) {
            case '1': 
                resultado = salario * 0.05;
                break;
            case '2': 
                resultado = salario * 0.11;
                break;
            case '3': 
                resultado = salario * 0.08;
                break;
            case '4': 
                resultado = salario * 0.01;
                break;    
            case '5': 
                resultado = salario * 0.06;
                break;    
            case '6': 
                resultado = salario * 0.09;
                break;
        } // Fim do switch

        // --- MÁGICA DA FORMATAÇÃO ---
        int reais = (int)resultado; 
        int centavos = (int)((resultado - reais) * 100);

        // Se o valor tiver milhar (ex: R$ 1.250,50)
        if (reais >= 1000) {
            int milhar = reais / 1000;
            int resto_reais = reais % 1000;
            
            printf("\n======================================");
            printf("\nO valor calculado é R$ %d.%03d,%02d", milhar, resto_reais, centavos);
            printf("\n======================================\n");
        } 
        // Se o valor for menor que mil (ex: R$ 150,50)
        else {
            printf("\n======================================");
            printf("\nO valor calculado é R$ %d,%02d", reais, centavos);
            printf("\n======================================\n");
        }

    } 
    // Se o usuário digitou 7, 8, 'A' ou qualquer outra coisa inválida
    else {
        printf("\n[ERRO] Você digitou uma opção incorreta! Digite novamente a opção correta entre 1 e 6.\n");
    }

    return 0;
}
