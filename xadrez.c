#include <stdio.h>

// Constantes para definir o número de movimentos de cada peça
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Simulando movimentações no tabuleiro com printf

    // ========== BISPO ==========
    // O bispo se move 5 casas na diagonal superior direita
    // Como a diagonal é uma combinação de cima + direita

    printf("Movimentação do Bispo (diagonal superior direita):\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-----------------------------\n");

    // ========== TORRE ==========
    // A torre se move 5 casas para a direita

    printf("Movimentação da Torre (direita):\n");
    int j = 0;
    while (j < TORRE_MOV) {
        printf("Direita\n");
        j++;
    }
    printf("-----------------------------\n");

    // ========== RAINHA ==========
    // A rainha se move 8 casas para a esquerda

    printf("Movimentação da Rainha (esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOV);
    printf("-----------------------------\n");

    return 0;
}
