/*
** EPITECH PROJECT, 2024
** Gomoku
** File description:
** unmake_move.c
*/

void unmake_move(int board[19][19], int x, int y)
{
    board[y][x] = 0;
}