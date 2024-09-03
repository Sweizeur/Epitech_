/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-myls-anthony.ong
** File description:
** my_sort_str
*/

#include "my.h"

void moresort(char *str, int *i, int *j)
{
    char tmp;

    if (str[*i] < str[*j]) {
        tmp = str[*i];
        str[*i] = str[*j];
        str[*j] = tmp;
    }
}

char *my_sort_str(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        for (int j = 0; j < my_strlen(str); j++) {
            moresort(str, &i, &j);
        }
    }
    return (str);
}
