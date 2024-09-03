/*
** EPITECH PROJECT, 2023
** my_find_prime_sup
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <stdio.h>

int my_is_prime2(int nb)
{
    if (nb == 1 || nb == 0 || nb < 0) {
        return (0);
    }
    for (int i = 2; i < nb; i++) {
        if ((nb % i) == 0) {
            return (0);
        }
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb <= 0) {
        return (2);
    }
    while (my_is_prime2(i) != 1) {
        i = i + 1;
    }
    return (i);
}
