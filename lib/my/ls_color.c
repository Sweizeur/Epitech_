/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-myls-anthony.ong
** File description:
** color_ls
*/

#include "my.h"
#include <sys/stat.h>
#include <unistd.h>

int ls_color(char *name)
{
    struct stat s;
    char buf[1];

    stat(name, &s);
    if (readlink(name, buf, 1) != -1)
        return (my_printf("\033[1;36m%s\033[0m", my_path_to_filename(name)));
    name = my_path_to_filename(name);
    if (S_ISDIR(s.st_mode) == 1)
        return (my_printf("\033[1;34m%s\033[0m", name));
    if (S_ISREG(s.st_mode) == 1 && s.st_mode & S_IXUSR)
        return (my_printf("\033[1;32m%s\033[0m", name));
    return (my_printf("%s", name));
}
