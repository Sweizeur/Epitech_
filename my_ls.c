/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_ls
*/

#include "include/my.h"
#include "lib/my/my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

static char **stock_dir(char **av, int ac, char **tab)
{
    int c = 0;

    for (int i = 1; i < ac; i++) {
        if (av[i][0] != '-') {
            tab[c] = av[i];
            c++;
        }
    }
    tab[c] = NULL;
    if (c == 0) {
        tab[0] = ".";
        tab[1] = NULL;
    }
    return (tab);
}

static char *stock_flag(char **av, int ac, char *flags)
{
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-')
            my_strcat(flags, &(av[i])[1]);
    }
    return (flags);
}

static int flag_ls(char *flag, char **dir, int i)
{
    const Ls ls[] = {
        ls_default, ls_flag_alphar, ls_flag_a, ls_flag_d,
        ls_flag_l, ls_flag_r, ls_flag_t, ls_flag_ar,
        NULL};
    const char *flags[] = {
        "", "R", "a", "d", "l", "r", "t", "ar",
        NULL};

    for (int j = 0; flags[j] != NULL; j++) {
        if (my_strcmp(flag, flags[j]) == 0) {
            ls[j](dir, i);
            return (1);
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    char flags[7] = "";
    char *tab[ac];
    int f = 0;
    struct stat st;

    tab[0] = NULL;
    stock_flag(av, ac, flags);
    stock_dir(av, ac, tab);
    for (int i = 0; tab[i] != NULL; i++)
        if (stat(tab[i], &st) == -1)
            my_printf("my_ls: cannot access '%s': No such file or directory\n",
            tab[i]);
    my_sort_tab(tab);
    for (int i = 0; tab[i] != NULL; i++)
        if (stat(tab[i], &st) != -1)
            f = flag_ls(my_strdouble_to_str(my_sort_str(flags)), tab, i);
    if (f != 0)
        my_printf("\n");
    return ((f == 0) ? 84 : 0);
}
