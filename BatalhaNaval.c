#include <stdio.h>

/**
 * Desafio Batalha Naval - MateCheck
 * Nível Mestre: Posicionamento e Habilidades Especiais
 */

int main() {
    // --- Nível Novato e Aventureiro: Tabuleiro 10x10 ---
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (Água) usando loops aninhados
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- Posicionamento de Navios (Valor 3) ---
    // Navio Horizontal (Linha 2, Colunas 1 a 3)
    tabuleiro[2][1] = 3; tabuleiro[2][2] = 3; tabuleiro[2][3] = 3;

    // Navio Vertical (Coluna 5, Linhas 4 a 6)
    tabuleiro[4][5] = 3; tabuleiro[5][5] = 3; tabuleiro[6][5] = 3;

    // Navio Diagonal (Iniciando em 0,0)
    tabuleiro[0][0] = 3; tabuleiro[1][1] = 3; tabuleiro[2][2] = 3;

    // --- Nível Mestre: Habilidades Especiais (Valor 1) ---
    
    // 1. Habilidade em CRUZ (Centro em 8,2)
    int centroX = 8, centroY = 2;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Se estiver na mesma linha ou mesma coluna do centro (dentro de um range)
            if (i == centroX && j >= centroY - 1 && j <= centroY + 1) tabuleiro[i][j] = 1;
            if (j == centroY && i >= centroX - 1 && i <= centroX + 1) tabuleiro[i][j] = 1;
        }
    }

    // 2. Habilidade em CONE (Topo em 0,7)
    tabuleiro[0][7] = 1;         // Topo
    tabuleiro[1][6] = 1; tabuleiro[1][7] = 1; tabuleiro[1][8] = 1; // Base

    // --- Exibição do Tabuleiro Completo ---
    printf("=== TABULEIRO BATALHA NAVAL ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada fileira
    }

    return 0;
}
