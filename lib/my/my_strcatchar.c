/*
** EPITECH PROJECT, 2023
** MY_ISNEG
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include <stdio.h>

char *my_strcatchar(char *dest, char const src)
{
    int len = my_strlen(dest);

    dest[len] = src;
    dest[len + 1] = '\0';
    return (dest);
}
