#include <stdio.h>

#define TAMANHO 10

int main() {
    // Inicializa o tabuleiro 10x10 com zeros (água)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // --- Posicionamento dos Navios (Manual via código) ---

    // 1. Navio Horizontal (4 unidades) - Linha 2, Colunas 1 a 4
    for (int j = 1; j <= 4; j++) {
        tabuleiro[2][j] = 3;
    }

    // 2. Navio Vertical (3 unidades) - Coluna 8, Linhas 5 a 7
    for (int i = 5; i <= 7; i++) {
        tabuleiro[i][8] = 3;
    }

    // 3. Navio Diagonal 1 (3 unidades) - Principal (Baixo/Direita)
    // Coordenadas: (0,0), (1,1), (2,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // 4. Navio Diagonal 2 (3 unidades) - Secundária (Cima/Direita)
    // Coordenadas: (9,0), (8,1), (7,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[9 - i][i] = 3;
    }

    // --- Exibição do Tabuleiro ---
    printf("--- BATALHA NAVAL ---\n\n");
    printf("Legenda: 0 = Água | 3 = Navio\n\n");

    // Imprime índices das colunas para facilitar a leitura
    printf("    ");
    for (int j = 0; j < TAMANHO; j++) printf("%d ", j);
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d | ", i); // Índice da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // --- Exibição de Coordenadas Específicas (Objetivo Novato) ---
    printf("\nCoordenadas do Navio Horizontal: (2,1), (2,2), (2,3), (2,4)\n");
    printf("Coordenadas do Navio Vertical: (5,8), (6,8), (7,8)\n");

    return 0;
}
