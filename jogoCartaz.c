#include <stdio.h>

/**
 * Desafio Super Trunfo - Países
 * Tema 2: Comparação de Cartas
 * Objetivo: Cadastrar duas cartas e comparar seus atributos para determinar a vencedora.
 */

int main() {
    // ---git add .
     Definição das Variáveis para a Carta 1 ---
    char estado1, codigo1[4], nome1[50];
    int populacao1;
    float area1, pib1;

    // --- Definição das Variáveis para a Carta 2 ---
    char estado2, codigo2[4], nome2[50];
    int populacao2;
    float area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c limpa o buffer do teclado
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê nomes com espaços até a quebra de linha
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);

    // --- Comparação de Cartas ---
    // Vamos escolher um atributo para a comparação (Exemplo: População)
    printf("\n=== RESULTADO DA COMPARAÇÃO (ATRIBUTO: POPULAÇÃO) ===\n");

    /* Lógica: Se a população da carta 1 for maior que a da carta 2, a 1 vence.
       Caso contrário (else), a carta 2 vence.
    */
    if (populacao1 > populacao2) {
        printf("Vencedor: Carta 1 - %s (%s)\n", nome1, codigo1);
        printf("Critério: %d habitantes vs %d habitantes\n", populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: Carta 2 - %s (%s)\n", nome2, codigo2);
        printf("Critério: %d habitantes vs %d habitantes\n", populacao2, populacao1);
    } else {
        printf("Empate! Ambas as cidades possuem a mesma população.\n");
    }

    // --- Bônus: Comparação por outro atributo (PIB) ---
    printf("\n=== RESULTADO DA COMPARAÇÃO (ATRIBUTO: PIB) ===\n");
    
    if (pib1 > pib2) {
        printf("Vencedor: %s tem o maior PIB (R$ %.2f bilhões).\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("Vencedor: %s tem o maior PIB (R$ %.2f bilhões).\n", nome2, pib2);
    } else {
        printf("Empate no PIB!\n");
    }

    return 0;
}