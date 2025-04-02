#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 inicializado com 0 (água)

// Posiciona um navio vertical (linhas 2-4, coluna 1)
for (int linha = 2; linha <= 4; linha++) {
    tabuleiro[linha][1] = 3; // 3 = navio
}

// Posiciona um navio horizontal (linha 9, colunas 6-8)
for (int coluna = 6; coluna <= 8; coluna++) {
    tabuleiro[9][coluna] = 3;
}

printf("     A B C D E F G H I J\n"); // As linha de cabeçalho das colunas
printf("     ___________________\n"); 


for (int linha = 0; linha < 10; linha++) {
    printf("%2d  |", linha + 1); // Número da linha (1-10)
    for (int coluna = 0; coluna < 10; coluna++) {
        printf("%d ", tabuleiro[linha][coluna]);
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
