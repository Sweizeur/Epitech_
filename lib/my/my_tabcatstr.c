/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_tabcatstr
*/

#include "my.h"
#include <stdio.h>

void my_tabcatstr(char *str, char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        if (my_strcmp(str, tab[i]) == 0)
            return;
    }
    tab[my_tablen(tab)] = my_strdup(str);
}
