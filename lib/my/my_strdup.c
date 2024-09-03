/*
** EPITECH PROJECT, 2023
** day08
** File description:
** task01
*/

#include "my.h"

#include <stdlib.h>


char *my_strdup(char const *src)
{
    char *str;

    str = malloc(my_strlen(src) + 1);
    my_strcpy(str, src);
    return (str);
}
