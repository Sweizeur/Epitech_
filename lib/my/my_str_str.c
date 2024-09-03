/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <string.h>

int len_str_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int cmpmore_str_str(char const *s1, char const *s2, int len_s2)
{
    for (int i = 0; i < len_s2; i++) {
        if (s1[i] != s2[i]) {
            return (0);
        }
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int check = 0;

    for (int i = 0; i < len_str_str(str); i++) {
        if (str[i] == to_find[0]) {
            check = cmpmore_str_str(&str[i], to_find, len_str_str(to_find));
        }
        if (check != 0) {
            return (&str[i]);
        }
    }
    return (NULL);
}
