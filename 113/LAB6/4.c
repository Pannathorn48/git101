#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{
    int board[BOARD_SIZE][BOARD_SIZE];
    int n, x, y, i, j;
    for (i = 0; i < BOARD_SIZE; i++)
    {
        for (j = 0; j < 8; j++)
        {
            board[i][j] = ' ';
        }
    }
    char s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("\n%c(%d, %d)", &s, &x, &y);
        setPieceOnTable(board, s, x, y);
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c|", board[j][i]);
        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[xPos][yPos] = piece;
}
