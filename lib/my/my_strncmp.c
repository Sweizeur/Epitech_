/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <stdio.h>

int len_str_strncmp(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int cmpmore_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len_s1 = len_str_strncmp(s1);
    int len_s2 = len_str_strncmp(s2);

    if (len_s1 == len_s2) {
        return (cmpmore_strncmp(s1, s2, n));
    }
    if (len_s1 != len_s2) {
        return (len_s1 - len_s2);
    }
}
