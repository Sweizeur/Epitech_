/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-myls-anthony.ong
** File description:
** my_strdouble_to_str
*/

#include "my.h"

char *my_strdouble_to_str(char *str)
{
    int i = 0;
    int j = 0;
    char *no_double_str = malloc(sizeof(char) * my_strlen(str));

    while (str[i] != '\0') {
        if (str[i] != str[i + 1]) {
            no_double_str[j] = str[i];
            j += 1;
        }
        i += 1;
    }
    no_double_str[j] = '\0';
    return (no_double_str);
}
