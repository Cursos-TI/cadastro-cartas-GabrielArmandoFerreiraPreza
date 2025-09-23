#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;          // letra do estado
    char codigo1[50];      // código da carta
    char nomeCidade1[50];  // nome da cidade (com espaços)
    int populacao1;        // população da cidade
    float area1;           // área em km²
    float pib1;            // PIB em bilhões
    int pontosTuristicos1; // número de pontos turísticos
    float densidade1, pibPerCapita1; // calculados

    // --- Variáveis da Carta 2 ---
    char estado2;          
    char codigo2[50];      
    char nomeCidade2[50];  
    int populacao2;        
    float area2;           
    float pib2;            
    int pontosTuristicos2; 
    float densidade2, pibPerCapita2;

    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // lê letra do estado

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%49s", codigo1); // lê código da carta com limite de 49 caracteres

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);  // lê linha inteira incluindo espaços, limite 49 caracteres

    printf("Digite a População: ");
    scanf("%d", &populacao1); // lê população

    printf("Digite a Área em km²: ");
    scanf("%f", &area1); // lê área

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1); // lê PIB

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // lê pontos turísticos

    // Cálculos carta 1
    densidade1 = populacao1 / area1; // habitantes por km²
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita em reais

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%49s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Exibição dos dados da Carta 1 ---
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);      
    printf("Código: %s\n", codigo1);      
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);      
    printf("Código: %s\n", codigo2);      
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}