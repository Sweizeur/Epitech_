/*
** EPITECH PROJECT, 2023
** day04
** File description:
** task02
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (i);
}
