#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    // DECLARAÇÃO DAS VARIÁVEIS DOS SÓLIDOS
    char escolha;
    
    // Paraleloepípedo
    float comprimento, largura, altura, volumeP; 
    
    // Cilindro
    float raioC, alturaC, volumeC;
    
    // Cone
    float raioCo, alturaCo, volumeCo;
    
    // Esfera
    float raioE, volumeE;
    
    // Cubo
    float lado, volumeCub;

    printf("--- CALCULO DOS SOLIDOS ---\n");
    printf("DIGITE 1 PARA CILINDRO:\n");
    printf("DIGITE 2 PARA CONE:\n");
    printf("DIGITE 3 PARA ESFERA:\n");
    printf("DIGITE 4 PARA CUBO:\n");
    printf("DIGITE 5 PARA PARALELEPIPEDO RETANGULO:\n");
    printf("As informacoes sao dadas em metros\n\n");
    
    printf("ESCOLHA SEU SOLIDO: ");
    scanf(" %c", &escolha);

    switch (escolha) {
        
        case '1': // CILINDRO
            printf("INFORME O RAIO DO CILINDRO EM METROS: ");
            scanf("%f", &raioC);
            printf("INFORME A ALTURA DO CILINDRO EM METROS: ");
            scanf("%f", &alturaC);
            
            volumeC = 3.14 * (raioC * raioC) * alturaC;
            
            printf("O VOLUME DO CILINDRO DE RAIO %.2f E ALTURA %.2f SERA: %.2f\n", raioC, alturaC, volumeC);
            break;
            
        case '2': // CONE
            printf("INFORME O RAIO DO CONE EM METROS: ");
            scanf("%f", &raioCo);
            printf("INFORME A ALTURA DO CONE EM METROS: ");
            scanf("%f", &alturaCo);
            
            volumeCo = (3.14 * (raioCo * raioCo) * alturaCo) / 3.0;
            
            printf("O VOLUME DO CONE DE RAIO %.2f E ALTURA %.2f SERA: %.2f\n", raioCo, alturaCo, volumeCo);
            break;
            
        case '3': // ESFERA
            printf("INFORME O VALOR DO RAIO DA ESFERA EM METROS: ");
            scanf("%f", &raioE);
            
            // Nota: Usamos 4.0/3.0 para evitar a divisão inteira que resultaria em 1
            volumeE = (4.0 / 3.0) * 3.14 * (raioE * raioE * raioE);
            
            printf("O VOLUME DA ESFERA DE RAIO %.2f SERA: %.2f\n", raioE, volumeE);
            break;
            
        case '4': // CUBO
            printf("INFORME O LADO DO CUBO EM METROS: ");
            scanf("%f", &lado);
            
            volumeCub = lado * lado * lado;
            
            printf("O VOLUME DO CUBO DE LADO %.2f SERA: %.2f\n", lado, volumeCub);
            break;
            
        case '5': // PARALELEPÍPEDO
            printf("DIGITE O COMPRIMENTO DO PARALELEPIPEDO EM METROS: ");
            scanf("%f", &comprimento);
            printf("DIGITE A LARGURA DO PARALELEPIPEDO EM METROS: ");
            scanf("%f", &largura);
            printf("DIGITE A ALTURA DO PARALELEPIPEDO EM METROS: ");
            scanf("%f", &altura);
            
            volumeP = comprimento * largura * altura;
            
            printf("O VOLUME DO PARALELEPIPEDO DE COMPRIMENTO %.2f, LARGURA %.2f E ALTURA %.2f SERA DE: %.2f\n", comprimento, largura, altura, volumeP);
            break;
            
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
