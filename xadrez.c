#include <stdio.h>

// Constantes para definir o número de movimentos de cada peça
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função recursiva para o movimento do bispo (diagonal: cima + direita)
void mover_bispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo(passos - 1);
}

// Função recursiva para o movimento da torre (direita)
void mover_torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    mover_torre(passos - 1);
}

// Função recursiva para o movimento da rainha (esquerda)
void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

// Movimento do cavalo (em L: 2 para cima, 1 para a direita) com múltiplas variáveis
void mover_cavalo_L() {
    printf("Movimentação do Cavalo (L para cima e direita):\n");

    for (int i = 0; i < 3; i++) { // Só pra demonstrar até 3 tentativas de movimento
        for (int cima = 0, direita = 0; cima <= 2 || direita <= 1; cima++, direita++) {
            if (cima > 2) continue;
            if (direita > 1) break;

            if (cima < 2) {
                printf("Cima\n");
            }
            if (cima == 2 && direita == 1) {
                printf("Direita\n");
                printf("--- Movimento em L concluído ---\n");
                break;
            }
        }
    }
}

int main() {
    printf("Movimento do Bispo (diagonal superior direita):\n");
    mover_bispo(5);
    printf("-----------------------------\n");

    printf("Movimento da Torre (direita):\n");
    mover_torre(5);
    printf("-----------------------------\n");

    printf("Movimento da Rainha (esquerda):\n");
    mover_rainha(8);
    printf("-----------------------------\n");

    mover_cavalo_L();
    printf("-----------------------------\n");

    return 0;
}
