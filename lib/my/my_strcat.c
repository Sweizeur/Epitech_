/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** a
*/

#include "my.h"
char *my_strcat(char *dest, char const *src)
{
    int len_total = my_strlen(dest) + my_strlen(src);
    int len_dest = my_strlen(dest);
    int i = 0;

    while (i <= len_total) {
        dest[len_dest + i] = src[i];
        i += 1;
    }
    return (dest);
}
