#include <stdio.h>

void initBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

void playerMove(char board[3][3], char player) {
    int row, col;
    do {
        printf("Joueur %c, entrez la ligne et la colonne (1-3): ", player);
        scanf("%d %d", &row, &col);
        row--; col--; // Conversion en index 0
    } while (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ');
    board[row][col] = player;
}
