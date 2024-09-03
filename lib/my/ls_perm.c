/*
** EPITECH PROJECT, 2023
** Default
** File description:
** ls_perm
*/

#include "my.h"

void ls_perm(char *str)
{
    str[3] = '\0';
    my_revstr(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0')
            my_printf("---");
        if (str[i] == '1')
            my_printf("--x");
        if (str[i] == '2')
            my_printf("-w-");
        if (str[i] == '3')
            my_printf("-wx");
        if (str[i] == '4')
            my_printf("r--");
        if (str[i] == '5')
            my_printf("r-x");
        if (str[i] == '6')
            my_printf("rw-");
        if (str[i] == '7')
            my_printf("rwx");
    }
}
