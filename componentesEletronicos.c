#include <stdio.h>

int main() {
    int escolha;

    // Exibe o menu de opções
    printf("=== Menu de Componentes Eletrônicos ===\n");
    printf("1. Capacitor\n");
    printf("2. Bateria\n");
    printf("3. Indutor (Bobina)\n");
    printf("4. Circuito Integrado\n");
    printf("Escolha um componente digitando um numero (1 a 4): ");
    
    // Lê a escolha do usuário
    scanf("%d", &escolha);

    printf("\n--- Utilidade na Computação ---\n");

    // Avalia a escolha e imprime o texto correspondente
    switch(escolha) {
        case 1:
            printf("CAPACITOR:\n");
            printf("Na computação, capacitores são essenciais para estabilizar a tensão elétrica e filtrar ruídos nas fontes de alimentação e placas-mãe. Além disso, em memórias RAM dinâmicas (DRAM), minúsculos capacitores são usados para armazenar cada bit de dado como uma carga elétrica.\n");
            break;
            
        case 2:
            printf("BATERIA:\n");
            printf("Além de fornecer energia para dispositivos portáteis (como notebooks e smartphones), na computação de mesa (desktops), uma pequena bateria (geralmente a CR2032) na placa-mãe é responsável por manter o Relógio de Tempo Real (RTC) funcionando e as configurações da BIOS/UEFI salvas mesmo quando o PC está fora da tomada.\n");
            break;
            
        case 3:
            printf("INDUTOR (BOBINA):\n");
            printf("Os indutores são muito utilizados nos Módulos Reguladores de Tensão (VRMs) das placas-mãe e placas de vídeo. Eles trabalham junto com os capacitores para armazenar energia em forma de campo magnético e suavizar/estabilizar a corrente elétrica de alta frequência que alimenta o processador.\n");
            break;
            
        case 4:
            printf("CIRCUITO INTEGRADO (CI):\n");
            printf("É a base da computação moderna. Um CI agrupa milhares ou até bilhões de componentes menores (como transistores, resistores e capacitores) em um único chip de silício. Processadores (CPUs), chips de memória, controladores de rede e GPUs são todos exemplos de circuitos integrados complexos.\n");
            break;
            
        default:
            // Caso o usuário digite um número fora do intervalo 1-4
            printf("Opção inválida! Por favor, rode o programa novamente e escolha um número entre 1 e 4.\n");
    }

    return 0;
}
