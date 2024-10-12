/*
** EPITECH PROJECT, 2024
** Gomoku
** File description:
** includes.h
*/

#ifndef INCLUDES
    #define INCLUDES

void make_move(int board[19][19], int x, int y, int color);
void unmake_move(int board[19][19], int x, int y);
void print_board(int board[19][19]);

#endif