#include <stdio.h>

// ==============================
// Função recursiva para a Torre
// ==============================
void moverTorre(int casas)
{
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ==============================
// Função recursiva para a Rainha
// ==============================
void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==============================
// Função recursiva para o Bispo
// + Loops aninhados para simular movimento diagonal
// ==============================
void moverBispo(int casas)
{
    if (casas == 0)
        return;

    // Loop externo simula movimento vertical (cima)
    for (int i = 0; i < 1; i++)
    {
        // Loop interno simula movimento horizontal (direita)
        for (int j = 0; j < 1; j++)
        {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ==============================
// Movimento complexo do Cavalo
// Duas casas para cima, uma para a direita
// ==============================
void moverCavalo()
{
    printf("Movimento do Cavalo:\n");

    // Loop externo para o movimento vertical (cima)
    for (int i = 2; i > 0; i--)
    {
        if (i == 1)
        {
            // Movimento final: direita
            for (int j = 0; j < 2; j++)
            {
                if (j == 1)
                {
                    printf("Direita\n");
                    break; // Termina o movimento após "Direita"
                }
                continue; // Ignora a primeira iteração
            }
        }
        printf("Cima\n");
    }
}

int main()
{
    // ===========================
    // Movimento da Torre (Recursivo)
    // ===========================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ===========================
    // Movimento do Bispo (Recursivo + Loops aninhados)
    // ===========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // ===========================
    // Movimento da Rainha (Recursivo)
    // ===========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ===========================
    // Movimento do Cavalo (Loops complexos)
    // ===========================
    printf("\n");
    moverCavalo();

    return 0;
}
