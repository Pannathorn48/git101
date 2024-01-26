#include <stdio.h>
#define BOARD_SIZE 8
void bishopMoves(int board[][BOARD_SIZE], int xPos, int yPos)
{
    int oriX = xPos;
    int oriY = yPos;
    while (xPos + 1 < 8 && yPos + 1 < 8)
    {
        board[++xPos][++yPos] = 'X';
    }
    xPos = oriX;
    yPos = oriY;
    while (xPos - 1 >= 0 && yPos - 1 >= 0)
    {
        board[--xPos][--yPos] = 'X';
    }
    xPos = oriX;
    yPos = oriY;
    while (xPos + 1 < 8 && yPos - 1 >= 0)
    {
        board[++xPos][--yPos] = 'X';
    }
    xPos = oriX;
    yPos = oriY;
    while (xPos - 1 >= 0 && yPos + 1 < 8)
    {
        board[--xPos][++yPos] = 'X';
    }
}
int main()
{
    int board[BOARD_SIZE][BOARD_SIZE], i, j, x, y;
    for (i = 0; i < BOARD_SIZE; i++)
    {
        for (j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &y, &x);
    board[x][y] = 'B';
    bishopMoves(board, x, y);
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for (i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c|", board[i][j]);
        }
        printf("\n------------------\n");
    }
}
