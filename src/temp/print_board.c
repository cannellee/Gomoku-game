#include <stdio.h>

void print_board(int board[19][19])
{
    for (int y = 0; y < 19; y++) {
        for (int x = 0; x < 19; x++)
            printf("%i", board[y][x]);
        printf("\n");
    }
}
