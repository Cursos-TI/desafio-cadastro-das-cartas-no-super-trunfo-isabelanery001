#include <stdio.h>


int main() {    // Declaração das variáveis da Carta 1
    char codigo1[5];                 // Código da carta 1 (ex: A-01)
    int populacao1;                  // População da carta 1
    float area1;                     // Área da carta 1
    float pib1;                      // PIB da carta 1
    int pontos1;                     // Número de pontos turísticos da carta 1


    // Declaração das variáveis da Carta 2
    char codigo2[5];                 // Código da carta 2 (ex: B-02)
    int populacao2;                  // População da carta 2
    float area2;                     // Área da carta 2
    float pib2;                      // PIB da carta 2
    int pontos2;                     // Número de pontos turísticos da carta 2


    // Cadastro dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código (ex: A-01): ");
    scanf(" %[^\n]", codigo1);       // Lê o código da carta 1 (com espaços e hífen)
    printf("População: ");
    scanf("%d", &populacao1);        // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area1);             // Lê a área em km²
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);              // Lê o PIB
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);           // Lê os pontos turísticos


    // Cadastro dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código (ex: B-02): ");
    scanf(" %[^\n]", codigo2);       // Lê o código da carta 2
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);



    // Exibição dos dados cadastrados
    printf("\n--- Dados das Cartas Cadastradas ---\n");



    // Mostra os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Mostra os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0; // Finaliza o programa
}