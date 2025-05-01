#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando for
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando while
    int movimentoBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (movimentoBispo < 5) {
        printf("Cima Direita\n");
        movimentoBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando do-while
    int movimentoRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);

    return 0;
}
