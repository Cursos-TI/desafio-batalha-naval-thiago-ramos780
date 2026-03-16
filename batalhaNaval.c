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
    //criação das variáveis
    int tabuleiro[10][10] = {0};
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //exibição das letras
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", letras[i]);
    }
    printf("\n");

    //adicionando os navios
    //horizontal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[2][5 + i] = navio1[i]; //horizontal 
    };

    //vertical
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[7 + i][2] = navio2[i]; 
    };

    //diagonal1
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[i][i] = navio3[i];
    }

    //diagonal2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 9; j > 6; j--)
        {
            tabuleiro[j][j] = navio4[i];
        }
        
    }
    

    //exibição da matriz
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", i + 1);
        for (int j = 0; j < 10; j++)
          {
            printf("%d ", tabuleiro[i][j]);
            
          };
        printf("\n");
        
    };
    
    return 0;
}
