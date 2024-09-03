/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_rm_str_to_tab
*/

#include "my.h"
#include <stdlib.h>

char **my_rm_str_to_tab(char **tab, char *str)
{
    int i = 0;
    int j = 0;
    char **new_tab = malloc(sizeof(char *) * (my_tablen(tab) + 1));

    for (; tab[i] != NULL; i++) {
        if (my_strcmp(tab[i], str) != 0) {
            new_tab[j] = tab[i];
            j++;
        }
    }
    new_tab[j] = NULL;
    return (new_tab);
}
