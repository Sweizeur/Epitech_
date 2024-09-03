/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <string.h>

int len_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_strlowcase(char *str)
{
    for (int i = 0; i < len_strlowcase(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return (str);
}
