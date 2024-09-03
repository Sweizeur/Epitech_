/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_sort_tab
*/

#include "my.h"
#include <stdio.h>

static char **more_sort(char **tab, int i, int j)
{
    char *tmp;

    if (my_strcmp(tab[i], tab[j]) > 0) {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
    }
    return (tab);
}

char **my_sort_tab(char **tab)
{
    char *tmp;

    for (int i = 0; tab[i] != NULL; i++) {
        for (int j = i + 1; tab[j] != NULL; j++) {
            tab = more_sort(tab, i, j);
        }
    }
    return (tab);
}
