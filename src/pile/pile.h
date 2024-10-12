/*
** EPITECH PROJECT, 2024
** [NAME_OF_PROJECT]
** File description:
** pile
*/

#ifndef PILE_H
    #define PILE_H

struct Item {
    struct Item *next;
    int x;
    int y;
    unsigned char color;
};

struct Pile {
    struct Item *first;
    int len;
};

struct Pile* init_pile(void);
void push(struct Pile *pile, int x, int y);
struct Item* pull(struct Pile *pile);

#endif
