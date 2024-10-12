/*
** EPITECH PROJECT, 2024
** [NAME_OF_PROJECT]
** File description:
** pile function
*/

#include "pile.h"
#include <stdlib.h>

struct Item * init_item(struct Item *next, int x, int y)
{
    struct Item *item = (struct Item *)malloc(sizeof (struct Item));

    item->x = x;
    item->y = y;
    item->next = next;
}

struct Pile * init_pile(void)
{
    struct Pile *pile = (struct Pile *)malloc(sizeof (struct Pile));

    pile->first = NULL;
    pile->len = 0;
    return pile;
}

void push(struct Pile *pile, int x, int y)
{
    pile->first = init_item (pile->first, x, y);
    pile->len += 1;
}

struct Item * pull(struct Pile *pile)
{
    struct Item *res = pile->first;

    pile->first = pile->first->next;
    pile->len -= 1;
    return res;
}
