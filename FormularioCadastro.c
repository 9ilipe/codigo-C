#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int idade;
    char nome[20], telefone[20], estadoCivil[20], endereco[20], cidade[20], estado[20], cep[20], pais[20], raca[20];

    // Leitura do Nome
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
     // Leitura da Idade
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
        // Limpeza do buffer do teclado
    while(getchar() != '\n');
    
    // Leitura da telefone
    printf("Informe seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0'; 
    
    // Leitura do estado civil
    printf("Informe seu estado civil: ");
    fgets(estadoCivil, sizeof(estadoCivil), stdin);
    estadoCivil[strcspn(estadoCivil, "\n")] = '\0';

    // Leitura do endereço
    printf("Informe seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    // Leitura da cidade
    printf("Informe sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
    
   // Leitura do estado
    printf("Informe seu estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';
   
   // Leitura do cep
    printf("Informe seu cep: ");
    fgets(cep, sizeof(cep), stdin);
    cep[strcspn(cep, "\n")] = '\0';
    
   // Leitura do pais
    printf("Informe seu pais: ");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0';
    
    // Leitura da raça 
    printf("Informe sua raça: ");
    fgets(raca, sizeof(raca), stdin);
    raca[strcspn(raca, "\n")] = '\0';

      // Exibição dos resultados
    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\nIdade: %d\nTelefone: %s\nEstado Civil: %s\nEndereco: %s\nCidade: %s\nEstado: %s\nCEP: %s\nPais: %s\nRaca: %s\n", 
           nome, idade, telefone, estadoCivil, endereco, cidade, estado, cep, pais, raca);
   
    return 0;
}
    
