/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_tabcpy
*/

#include "my.h"
#include <stdlib.h>

char **my_tabcpy(char **dest, char **src)
{
    int i = 0;

    for (; src[i] != NULL; i++)
        dest[i] = src[i];
    dest[i] = NULL;
    return (dest);
}
