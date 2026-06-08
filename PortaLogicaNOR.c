#include <stdio.h>
#include <stdlib.h>

int main() {
    int PORTAA, PORTAB;

    // Entrada de dados para a Porta A
    printf("DIGITE 0 PARA NIVEL LOGICO BAIXO OU 1 PARA NIVEL LOGICO ALTO: ");
    scanf("%d", &PORTAA);

    // Entrada de dados para a Porta B
    printf("DIGITE 0 PARA NIVEL LOGICO BAIXO OU 1 PARA NIVEL LOGICO ALTO: ");
    scanf("%d", &PORTAB);

    // Verificação das regras da porta lógica NOR
    if (PORTAA == 0 && PORTAB == 0) {
        printf("SEU NIVEL LOGICO SERA ALTO, OU SEJA, SERA IGUAL A 0\n");
    } 
    else if ((PORTAA == 0 && PORTAB == 0) || 
             (PORTAA == 0 && PORTAB == 1) || 
             (PORTAA == 1 && PORTAB == 0)) {
        printf("SEU NIVEL LOGICO SERA BAIXO, OU SEJA, SERA IGUAL A 1\n");
    } 
    else {
        printf("ERRO! FAVOR DIGITAR 0 OU 1\n");
    }

    return 0;
}
