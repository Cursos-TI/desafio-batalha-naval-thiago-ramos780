#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

int main() {
    // TABULEIRO
    int tabuleiro[10][10] = {0};

    // MATRIZES DAS HABILIDADES
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // LETRAS DO TABULEIRO
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // MOSTRAR LETRAS
    printf("   ");
    for(int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");

    // ----------------------
    // CONSTRUIR CONE
    // ----------------------

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if((i == 0 && j == 2) ||
               (i == 1 && j >= 1 && j <= 3) ||
               (i == 2))
                cone[i][j] = 1;
            else
                cone[i][j] = 0;

        }
    }

    // ----------------------
    // CONSTRUIR CRUZ
    // ----------------------

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;

        }
    }

    // ----------------------
    // CONSTRUIR OCTAEDRO
    // ----------------------

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if((i == 0 && j == 2) ||
               (i == 1 && j >= 1 && j <= 3) ||
               (i == 2) ||
               (i == 3 && j >= 1 && j <= 3) ||
               (i == 4 && j == 2))
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;

        }
    }

    // ----------------------
    // APLICAR CONE
    // ----------------------

    int linhaCone = 2;
    int colunaCone = 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linha = linhaCone + i - 2;
            int coluna = colunaCone + j - 2;

            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(cone[i][j] == 1)
                    tabuleiro[linha][coluna] = 5;
            }

        }
    }

    // ----------------------
    // APLICAR CRUZ
    // ----------------------

    int linhaCruz = 5;
    int colunaCruz = 5;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linha = linhaCruz + i - 2;
            int coluna = colunaCruz + j - 2;

            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(cruz[i][j] == 1)
                    tabuleiro[linha][coluna] = 5;
            }

        }
    }

    // ----------------------
    // APLICAR OCTAEDRO
    // ----------------------

    int linhaOct = 7;
    int colunaOct = 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linha = linhaOct + i - 2;
            int coluna = colunaOct + j - 2;

            if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
                if(octaedro[i][j] == 1)
                    tabuleiro[linha][coluna] = 5;
            }

        }
    }

    // ----------------------
    // MOSTRAR TABULEIRO
    // ----------------------

    for(int i = 0; i < 10; i++){

        printf("%d  ", i + 1);

        for(int j = 0; j < 10; j++){

            if(tabuleiro[i][j] == 0)
                printf("0 ");
            else if(tabuleiro[i][j] == 3)
                printf("3 ");
            else if(tabuleiro[i][j] == 5)
                printf("1 ");

        }

        printf("\n");
    }
    
    return 0;
}
