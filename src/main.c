/*
** EPITECH PROJECT, 2024
** Gomoku
** File description:
** main.c
*/

#include "includes.h"

int main()
{
    int board[19][19];
    for (int y = 0; y < 19; y++) {
        for (int x = 0; x < 19; x++)
            board[y][x] = 0;
    }

    make_move(board, 5, 5, 1);
    make_move(board, 5, 6, 2);

    print_board(board);
    return 0;
}