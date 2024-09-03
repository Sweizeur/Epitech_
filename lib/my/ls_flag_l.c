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
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <stdlib.h>

static int ls_color_d(char *name)
{
    struct stat s;
    char str[1024] = "/";
    char buf[1];

    my_strcat(str, name);
    stat(str, &s);
    if (readlink(name, buf, 1) != -1)
        return (my_printf("\033[1;36m%s\033[0m", &str[1]));
    if (S_ISDIR(s.st_mode) == 1)
        return (my_printf("\033[1;34m%s\033[0m", &str[1]));
    if (S_ISREG(s.st_mode) == 1 && s.st_mode & S_IXUSR)
        return (my_printf("\033[1;32m%s\033[0m", &str[1]));
    return (my_printf("%s", &str[1]));
}

static void ls_type(unsigned int nbr, char *name)
{
    char buf[1];

    if (readlink(name, buf, 1) != -1)
        my_printf("l");
    else if (S_ISDIR(nbr) == 1)
        my_printf("d");
    else
        my_printf("-");
}

static int info_file(char *name)
{
    struct stat s;
    char str[32];
    char buf[1];

    stat(name, &s);
    ls_type(s.st_mode, name);
    ls_octal(s.st_mode, str);
    ls_perm(str);
    my_printf(" %d ", s.st_nlink);
    my_printf("%s ", getpwuid(s.st_uid)->pw_name);
    my_printf("%s %d ", getgrgid(s.st_gid)->gr_name, s.st_size);
    for (int i = 4; i < 16; i++) {
        my_printf("%c", (ctime(&s.st_ctime))[i]);
    }
    my_printf(" ");
    return (readlink(name, buf, 1));
}

static void linkname(char *name, int boolen)
{
    char buf[1024] = {0};

    if (boolen != -1) {
        my_printf(" -> ");
        if (readlink(name, buf, 1024) != -1)
            ls_color_d(buf);
    }
}

static void ls_printdirs_l(char **dirstab)
{
    int boole = 0;

    for (int i = 0; dirstab[i] != NULL; i++) {
        boole = info_file(dirstab[i]);
        ls_color(dirstab[i]);
        linkname(dirstab[i], boole);
        if (dirstab[i + 1] != NULL)
            my_printf("\n");
    }
}

static void more_ls(char *str)
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
    ls_printdirs_l(dirs);
    closedir(dir);
}

void ls_flag_l(char **dir, int i)
{
    struct stat s;

    my_sort_tab(dir);
    stat(dir[i], &s);
    if (my_tablen(dir) > 1) {
        my_printf("%s:\n", dir[i]);
    }
    my_printf("total %d\n", s.st_blocks / 2);
    if (S_ISDIR(s.st_mode) == 1) {
        more_ls(dir[i]);
    } else if (S_ISREG(s.st_mode) == 1) {
        ls_color(dir[i]);
    }
    if (my_tablen(dir) > 1 && dir[i + 1] != NULL)
        my_printf("\n\n");
}
