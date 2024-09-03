/*
** EPITECH PROJECT, 2023
** Default
** File description:
** ls_flag_d
*/

#include "my.h"
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

static int ls_color_d(char *name)
{
    struct stat s;
    char buf[1];

    stat(name, &s);
    if (readlink(name, buf, 1) != -1)
        return (my_printf("\033[1;36m%s\033[0m", name));
    if (S_ISDIR(s.st_mode) == 1)
        return (my_printf("\033[1;34m%s\033[0m", name));
    if (S_ISREG(s.st_mode) == 1 && s.st_mode & S_IXUSR)
        return (my_printf("\033[1;32m%s\033[0m", name));
    return (my_printf("%s", name));
}

void ls_flag_d(char **dir, int i)
{
    my_sort_tab(dir);
    ls_color_d(dir[i]);
    if (dir[i + 1] != NULL)
        my_printf("  ");
}
