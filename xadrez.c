#include <stdio.h>

int main() {
    // =====================
    // Movimento da Torre
    // =====================
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // =====================
    // Movimento do Bispo
    // =====================
    int movimentoBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (movimentoBispo < 5) {
        printf("Cima Direita\n");
        movimentoBispo++;
    }

    // =====================
    // Movimento da Rainha
    // =====================
    int movimentoRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);

    // =====================
    // Movimento do Cavalo
    // =====================
    // O cavalo vai se mover duas casas para baixo e uma para a esquerda
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) para simular duas casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Loop interno (while) só executa uma vez após os dois movimentos para baixo
        if (i == 1) {
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}

