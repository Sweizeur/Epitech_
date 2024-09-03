/*
** EPITECH PROJECT, 2023
** intlen
** File description:
** m
*/

#include "my.h"
int my_intlen(int n)
{
    int c = 1;

    if (n < 0) {
        n = -n;
        c += 1;
    }
    if (n >= 10) {
        c = my_intlen(n / 10);
        c += 1;
    }
    return (c);
}
