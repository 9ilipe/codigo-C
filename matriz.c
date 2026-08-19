#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

# define linha 3
# define coluna 3

int main () {
    
    int matriz[linha][coluna];
    int i, j;
    
    // Construindo a matriz
    printf("Digite os elementos da matriz [%d]x[%d]:\n", linha, coluna);

    // CORREÇÃO: Usamos 'i' para controlar as linhas e 'i++' para avançar
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz na tela em formato de grade
    printf("\n\nA matriz construida sera:\n\n");
    
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("[%d] ", matriz[i][j]); // Mostra cada número
        }
        printf("\n"); // Pula de linha a cada 3 colunas para desenhar a matriz
    }

    return 0;
}
