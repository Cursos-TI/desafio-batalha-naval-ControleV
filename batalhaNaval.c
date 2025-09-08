#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("\nExemplo de tabuleiro 6x6 com navios horizontais e verticais.\n");
    int tabuleiro [6][6] = {
        {0, 0, 0, 0, 0, 0},
        {0, 3, 3, 3, 0, 0},
        {0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0}
    };
    int index = 1;

    printf("  A B C D E F");
    for (int linha = 0; linha <= 5; linha++) {
        printf("\n%d ", index);
        index++;

        for (int coluna = 0; coluna <= 5; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
    }
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tabuleiro2 [10][10];
    index = 0;

    // Posicionando as águas e navios.
    for (int linha = 0; linha <= 9; linha++) {
        for (int coluna = 0; coluna <= 9; coluna++) {
            //Primeiro navio.
            if (linha == 0 && coluna > 0 && coluna < 4){
                tabuleiro2[linha][coluna] = 3;

            // Segundo navio.
            } else if (linha >= 0 && linha < 3 && coluna == 9) {
                tabuleiro2[linha][coluna] = 3;
            
            // Terceiro navio.
            } else if (linha >= 6 && linha <= 8 && coluna >= 6 && coluna <= 8 && linha == coluna) {
                tabuleiro2[linha][coluna] = 3;

            // Quarto navio.
            } else if (linha >= 2 && linha <= 4 && coluna >= 2 && coluna <= 4 && (linha + coluna == 6)) {
                tabuleiro2[linha][coluna] = 3;
                
            // Se nenhuma das consições forem atendidas, preencha com água.
            } else {
                tabuleiro2[linha][coluna] = 0;
            }
        }
    }

    // Exibindo o resultado no terminal.
    printf("\nExemplo de tabuleiro 10x10 com navios na diagonal.\n");
    printf("˹.˺ A B C D E F G H I J\n");
    printf("˻°˼ - - - - - - - - - -");
    for (int linha = 0; linha <= 9; linha++) {
        printf("\n%d | ", index);
        index++;

        for (int coluna = 0; coluna <= 9; coluna++) {
            printf("%d ", tabuleiro2[linha][coluna]);
        }
    }
    printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
