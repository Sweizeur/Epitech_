/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_revtab
*/

#include "my.h"
#include <stdlib.h>

char **my_revtab(char **tab)
{
    int i = 0;
    int j = my_tablen(tab) - 1;
    char *tmp;

    while (i < j) {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
        i++;
        j--;
    }
    return (tab);
}
