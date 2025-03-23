#include <stdio.h>

int main(){

    // Declarando a matriz
    int matriz[10][10];
    int i, j;

    // Inicializando o tabuleiro com 02 navios
    for (i = 0; i < 10; i++) { 
        for (j = 0; j < 10; j++){
            matriz[i][j]= 0;
        }
    }

    // Definindo as coordenadas do navio horizontal
    int navioHorizontal = 1;
    matriz[1][1] = 1; 
    matriz[1][2] = 1;
    matriz[1][3] = 1;

    // Definindo as coordenadas do navio vertical
    int navioVertical = 2;
    matriz[6][8] = 2;
    matriz[7][8] = 2;
    matriz[8][8] = 2;

    // Imprimindo o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
