/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_getnbr
*/

#include "my.h"

#include <stdio.h>

int my_getnbr_str(char *str)
{
    int i = 0;
    int nb = 0;
    int n = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            n = n * -1;
        i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - 48);
        i += 1;
    }
    nb = nb * n;
    return (nb);
}
