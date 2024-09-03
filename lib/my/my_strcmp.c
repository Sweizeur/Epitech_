/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** fjdsgkjdfg
*/

#include "my.h"
#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j])
            return (s1[i] - s2[j]);
        i += 1;
        j += 1;
    }
    return (s1[i] - s2[j]);
}