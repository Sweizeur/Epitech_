/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task03
*/

#include "my.h"
char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char temp[my_strlen(str) + 1];

    while (str[j] != '\0') {
        temp[j] = str[j];
        j += 1;
    }
    j -= 1;
    while (j >= 0) {
        str[i] = temp[j];
        j -= 1;
        i += 1;
    }
    return (str);
}
