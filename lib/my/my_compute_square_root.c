/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <stdio.h>

int my_sqrt(int n, int val)
{
    if (n < 1) {
        return (0);
    }
    if ((n * n) == val) {
        return (n);
    }
    return (my_sqrt((n - 1), val));
}

int my_compute_square_root(int n)
{
    return (my_sqrt((n / 2), n));
}
