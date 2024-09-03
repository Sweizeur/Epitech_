/*
** EPITECH PROJECT, 2023
** Default
** File description:
** ls_printdirs
*/

#include "my.h"
#include <stdio.h>

void ls_printdirs(char **dirstab)
{
    for (int i = 0; dirstab[i] != NULL; i++) {
        ls_color(dirstab[i]);
        if (dirstab[i + 1] != NULL)
            my_printf("  ");
    }
}
