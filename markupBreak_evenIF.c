#include <stdio.h>
#include <stdlib.h> // Necessário para a função atof (converte texto para float)
#include <string.h> // Necessário para a função strchr (procura caracteres em textos)

// --- FUNÇÃO DE VALIDAÇÃO ---
// Lê a entrada do usuário e impede o uso de vírgulas
float ler_decimal() {
    char entrada[50];
    
    while (1) { // Loop infinito que só acaba quando o usuário digitar certo
        scanf("%49s", entrada); // Lê o dado como texto
        
        // Verifica se existe o caractere ',' dentro do texto digitado
        if (strchr(entrada, ',') != NULL) {
            printf("\n[!] ALERTA: Formato invalido! Nao utilize VIRGULA (,).\n");
            printf("Por favor, digite o valor novamente usando PONTO (.): ");
        } else {
            // Se não tiver vírgula, converte o texto para número float e retorna
            return atof(entrada); 
        }
    }
}

int main() {
    int opcao;

    // --- MENU INICIAL ---
    printf("======================================\n");
    printf("         MATEMATICA GERENCIAL         \n");
    printf("======================================\n");
    printf("Em número decimais não use virgula (,), use sempre ponto (.)\n");
    printf("[1] Valor de Venda (Markup)\n");
    printf("[2] Break-Even Point\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    printf("--------------------------------------\n");

    if (opcao == 1) {
        
        float custo, logistica, lucro, markup, valor_venda;

        printf("\n--- CALCULANDO MARKUP ---\n");
        
        printf("Custo da mercadoria (R$): ");
        custo = ler_decimal(); // Chama a nossa função protetora
        
        printf("Custo Logistico (%%): ");
        logistica = ler_decimal();
        
        printf("Margem de Lucro (%%): ");
        lucro = ler_decimal();

        // Processamento
        markup = 1.0 / (1.0 - ((logistica + lucro) / 100.0));
        valor_venda = custo * markup;

        // Saida de dados
        printf("\n>>> RESULTADO:\n");
        printf("Markup Multiplicador: %.4f\n", markup);
        printf("Valor de Venda Ideal: R$ %.2f\n", valor_venda);

    } 
    else if (opcao == 2) {
        
        float custo_fixo, preco_venda, custo_variavel, break_even;

        printf("\n--- CALCULANDO BREAK-EVEN ---\n");
        
        printf("Custo Fixo Total (R$): ");
        custo_fixo = ler_decimal();
        
        printf("Preco de Venda unitario (R$): ");
        preco_venda = ler_decimal();
        
        printf("Custo unitario do produto (R$): ");
        custo_variavel = ler_decimal();

        // Processamento
        break_even = custo_fixo / (preco_venda - custo_variavel);

        // Saida de dados
        printf("\n>>> RESULTADO:\n");
        printf("Break-Even Point: %.2f unidades\n", break_even);

    } 
    else {
        printf("\n[!] Opcao invalida. Tente novamente.\n");
    }
    
    printf("======================================\n");

    return 0;
}
