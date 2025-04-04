#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {
    int tabuleiro[linhas][colunas] = {0}; 
    
//------------------------------------------------------------------    
// Cone
    for (int l = 0; l <= 2; l++) {
        int c_inicial = 5 -l; // coluna inicial 5 e o eixo da piramide, -1 para cada linha
        int c_final = 5 + l; // coluna final +1 paa cada linha ate formar uma piramide de da linha 0 ate a 2

        for (int c = c_inicial; c <= c_final; c++) {
            tabuleiro[l][c] = 1; // 2 = cone
        }    
    }
//------------------------------------------------------------------    
// Cruz
    for (int l = 5; l <= 9; l++) { //posicao da linha da cruz iniciando na linha 5 ate a linha 9
        tabuleiro[l][7] = 1; // localizacao no tabuleiro 7 coluna
        }
    for (int c = 5; c <= 9; c++) { //posicao da coluna da cruz iniciando na coluna 5 ate a coluna 9
            tabuleiro[7][c] = 1; // localizacao no tabuleiro 7 linha
        } 
//------------------------------------------------------------------    
// Octaedro
    for (int l = 2; l <= 5; l++) {
        int qtc = l - 3;  // Calcula quantas colunas para cada lado
        for (int c = 2 - qtc; c <= 2 + qtc; c++) {
            tabuleiro[l][c] = 1;  // Preenche com '5'
        }
    }
// Parte decrescente (base do octaedro)
    for (int l = 6; l <= 7; l++) {
        int qtc = 7 - l;  // Inverte o crescimento
        for (int c = 2 - qtc; c <= 2 + qtc; c++) {
            tabuleiro[l][c] = 1;
    }
}
//------------------------------------------------------------------
    printf("     1 2 3 4 5 6 7 8 9 10\n"); // As linha de cabeçalho das colunas
    printf("     ___________________\n"); 

    
    for (int l = 0; l < 10; l++) {
        printf("%2d  |", l + 1 ); //imprime coluna com numero das linhas.
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }


    return 0;
}
