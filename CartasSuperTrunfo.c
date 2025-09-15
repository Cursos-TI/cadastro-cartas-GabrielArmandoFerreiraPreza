#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;          // Armazena a letra do estado da carta (A-H)
    char codigo1[50];      // Armazena o código da carta (ex: A01)
    char nomeCidade1[50];  // Armazena o nome da cidade, incluindo espaços
    int populacao1;        // Armazena a população da cidade
    float area1;           // Armazena a área da cidade em km²
    float pib1;            // Armazena o PIB da cidade em bilhões
    int pontosTuristicos1; // Armazena o número de pontos turísticos da cidade

    // --- Variáveis da Carta 2 ---
    char estado2;          
    char codigo2[50];      
    char nomeCidade2[50];  
    int populacao2;        
    float area2;           
    float pib2;            
    int pontosTuristicos2; 

    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");       // Mostra título do cadastro da carta 1
    printf("Estado (A-H): ");                     // Pede a letra do estado
    scanf(" %c", &estado1);                       // Lê a letra do estado
    printf("Código da Carta (ex: A01): ");        // Pede o código da carta
    scanf("%49s", codigo1);                       // Lê o código da carta (até 49 caracteres)
    printf("Nome da Cidade: ");                   // Pede o nome da cidade
    scanf(" %49[^\n]", nomeCidade1);             // Lê o nome completo, incluindo espaços
    printf("População: ");                        // Pede população
    scanf("%d", &populacao1);                     // Lê população
    printf("Área em km²: ");                      // Pede área
    scanf("%f", &area1);                          // Lê área
    printf("PIB em bilhões de reais: ");          // Pede PIB
    scanf("%f", &pib1);                           // Lê PIB
    printf("Número de Pontos Turísticos: ");      // Pede pontos turísticos
    scanf("%d", &pontosTuristicos1);             // Lê pontos turísticos

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");     // Mostra título do cadastro da carta 2
    printf("Estado (A-H): ");                     
    scanf(" %c", &estado2);                       
    printf("Código da Carta (ex: B02): ");        
    scanf("%49s", codigo2);                        // Lê código da carta (até 49 caracteres)
    printf("Nome da Cidade: ");                   
    scanf(" %49[^\n]", nomeCidade2);             // Lê nome completo, incluindo espaços
    printf("População: ");                        
    scanf("%d", &populacao2);                     
    printf("Área em km²: ");                      
    scanf("%f", &area2);                          
    printf("PIB em bilhões de reais: ");          
    scanf("%f", &pib2);                           
    printf("Número de Pontos Turísticos: ");      
    scanf("%d", &pontosTuristicos2);             

    // --- Exibição dos dados da Carta 1 ---
    printf("\n=== Carta 1 ===\n");                 
    printf("Estado: %c\n", estado1);             
    printf("Código: %s\n", codigo1);             
    printf("Nome da Cidade: %s\n", nomeCidade1); 
    printf("População: %d\n", populacao1);       
    printf("Área: %.2f km²\n", area1);           
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n=== Carta 2 ===\n");                 
    printf("Estado: %c\n", estado2);             
    printf("Código: %s\n", codigo2);             
    printf("Nome da Cidade: %s\n", nomeCidade2); 
    printf("População: %d\n", populacao2);       
    printf("Área: %.2f km²\n", area2);           
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
