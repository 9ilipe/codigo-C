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
#include <locale.h>


int main()    {
setlocale(LC_ALL, "");

    printf("Digite 1 para Imposto de renda - 5%%\n");
    printf("Digite 2 para INSS - 11%%\n");
    printf("Digite 3 para FGTS - 8%%\n");
    printf("Digite 4 para Sindicato - 1%%\n");
    printf("Digite 5 para Transporte - 6%%\n");
    printf("Digite 6 para Plano de saúde - 9%%\n");

char opcao;
    printf("\nEscolha o que quer calcular ");
    scanf("%c", &opcao);

float salario, resultado;
printf("Digite o valor do seu salário R$ ");
scanf("%f",&salario);

switch (opcao) {

    default: // Se digitar qualquer outra coisa
        printf("Erro: Opção inválida! Escolha um número de 1 a 6.");
        break;  
    case '1': // Se o usuário digitou '1'
        resultado = salario * 0.05;
        printf("O valor do Imposto de Renda é R$ %.2f", resultado);
        break;
    case '2': // Se o usuário digitou '2'
        resultado = salario * 0.11;
        printf("O valor do INSS é R$ %.2f", resultado);
        break;
    case '3': // Se o usuário digitou '3'
        resultado = salario * 0.08;
        printf("O valor do FGTS é R$ %.2f", resultado);
        break;
    case '4': // Se o usuário digitou '4'
        resultado = salario * 0.01;
        printf("O valor do Sindicato é R$ %.2f", resultado);
        break;    
    case '5': // Se o usuário digitou '5'
        resultado = salario * 0.06;
        printf("O valor do Transporte é R$ %.2f", resultado);
        break;    
    case '6': // Se o usuário digitou '6'
        resultado = salario * 0.09;
        printf("O valor do Plano de saúde é R$ %.2f", resultado);
        break;
      
}
return 0;
}
    