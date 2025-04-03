#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define linhas 10
#define colunas 10

int main() {
    int tabuleiro[linhas][colunas] = {0}; 

    // Posiciona um navio vertical (linhas 2-4, coluna 1) 
    for (int l = 2; l <= 4; l++) { //Posicionamento navio. l=2 (que comeca na linha 2 {0,1,2}), l<=4 termina na linha 4 {0,1,2,3,4}. ocupando a linha {2,3,4}
        tabuleiro[l][1] = 3; // 3 = navio
    }
    
    // Posiciona um navio horizontal (linha 9, colunas 6-8)
    for (int c = 6; c <= 8; c++) {
        tabuleiro[9][c] = 3; // 3 = navio
    }

     // Posiciona um navio DIAGONA [3][3],[2][4],[1][5]
     for (int l = 0; l < 3; l++) {
        tabuleiro[3-l][3+l] = 3; // 3 = navio ([linha inicial][coluna inicial] , - na linha vai para esquerda, - na coluna sobe).
    }

    // Posiciona um navio DIAGONA [9][0],[8][1],[7][2]
    for (int l = 0; l < 3; l++) {
        tabuleiro[9-l][0+l] = 3; // 3 = navio ([linha inicial][coluna inicial] , - na linha vai para esquerda, - na coluna sobe).
    }

    printf("     A B C D E F G H I J\n"); // As linha de cabeçalho das colunas
    printf("     ___________________\n"); 

    
    for (int l = 0; l < 10; l++) {
        printf("%2d  |", l + 1 ); //imprime coluna com numero das linhas.
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }
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

    return 0;
}
