/*
** EPITECH PROJECT, 2023
** my_compute_power_it
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <stdio.h>

int check_rec(int n, int p, int r)
{
    if (n > 0 && r > 0) {
        return (r);
    }
    if (n < 0 && p % 2 == 0 && r > 0) {
        return (r);
    }
    if (n < 0 && p % 2 != 0 && r < 0) {
        return (r);
    }
    return (0);
}

int my_compute_power_rec(int n, int p)
{
    int r = n;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    r = my_compute_power_rec(n, p - 1) * r;
    return ("%d", check_rec(n, p, r));
}
