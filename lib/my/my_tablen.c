/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_tablen
*/

#include "my.h"
#include <stdlib.h>

int my_tablen(char **tab)
{
    int i = 0;

    for (i; tab[i] != NULL; i++);
    return (i);
}
