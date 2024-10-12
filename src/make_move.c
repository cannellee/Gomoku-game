/*
** EPITECH PROJECT, 2024
** Gomoku
** File description:
** make_move.c
*/

void make_move(int board[19][19], int x, int y, int color)
{
    board[y][x] = color;
}