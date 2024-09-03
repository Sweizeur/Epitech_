/*
** EPITECH PROJECT, 2023
** Default
** File description:
** ls_flag_alphar
*/

#include "my.h"
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>

static void ifdir(char **dirs)
{
    struct stat s;

    for (int i = 0; dirs[i] != NULL; i++) {
        stat(dirs[i], &s);
        if (S_ISDIR(s.st_mode) == 1) {
            my_printf("\n\n");
            ls_flag_alphar1(dirs, i);
        }
    }
}

static void more_ls(char *str, char **dirp, int i)
{
    char *dirs[256] = {NULL};
    struct dirent *entry;
    DIR *dir;
    char tmp[my_strlen(str) + 256];

    my_strcat(tmp, str);
    dir = opendir(str);
    for (entry = readdir(dir); entry != NULL; entry = readdir(dir))
        if (entry->d_name[0] != '.') {
            my_strcpy(tmp, str);
            my_strcat(tmp, "/");
            my_strcat(tmp, entry->d_name);
            my_tabcatstr(tmp, dirs);
        }
    my_sort_tab(dirs);
    my_printf("%s:\n", str);
    ls_printdirs(dirs);
    closedir(dir);
    ifdir(dirs);
}

void ls_flag_alphar1(char **dir, int i)
{
    struct stat s;

    my_sort_tab(dir);
    stat(dir[i], &s);
    if (S_ISDIR(s.st_mode) == 1) {
        more_ls(dir[i], dir, i);
    } else if (S_ISREG(s.st_mode) == 1) {
        ls_color(dir[i]);
    }
}

void ls_flag_alphar(char **dir, int i)
{
    struct stat s;

    my_sort_tab(dir);
    stat(dir[i], &s);
    if (S_ISDIR(s.st_mode) == 1) {
        more_ls(dir[i], dir, i);
    } else if (S_ISREG(s.st_mode) == 1) {
        ls_color(dir[i]);
    }
    if (dir[i + 1] != NULL)
        my_printf("\n\n");
}
