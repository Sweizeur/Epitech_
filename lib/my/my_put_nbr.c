/*
** EPITECH PROJECT, 2023
** day07
** File description:
** put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int n = 1;
    int tmp = nb;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        tmp = -tmp;
        n += 1;
    }
    while (tmp / 10 != 0) {
        n += 1;
        tmp = tmp / 10;
    }
    if (nb / 10 != 0) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return n;
}
