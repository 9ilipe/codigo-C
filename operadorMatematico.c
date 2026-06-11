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
printf("escolha a sua operação ");
scanf("%c", &operacao);

float num1, num2, resultado;
printf("Digite o 1° número:");
scanf("%f",&num1);

printf("Digite o 2° número:");
scanf("%f",&num2);

switch (operacao)    {
case '+':
resultado = num1+num2;
printf("A soma será %.2f", resultado);
break;

case '-':
resultado = num1+num2;
printf("A subtração será %.2f", resultado);
break;

case '*':
resultado = num1+num2;
printf("A Multiplicação será %.2f", resultado);
break;

case '/':
if (num2 == 0)    {
printf("erro, pois não há divisão por zero"); }
else   {
resultado = num1/num2;
printf("A Divisão será %.2f", resultado);
}
break;
}
return 0;
}
