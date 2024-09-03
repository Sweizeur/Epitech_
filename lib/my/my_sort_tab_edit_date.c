/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_sort_tab_edit_date
*/

#include "my.h"
#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

void my_sort_tab_edit_date(char **dir)
{
    struct stat s1;
    struct stat s2;
    char *tmp;

    for (int i = 0; dir[i + 1] != NULL; i++) {
        stat(dir[i], &s1);
        stat(dir[i + 1], &s2);
        if (s1.st_mtime < s2.st_mtime) {
            tmp = dir[i];
            dir[i] = dir[i + 1];
            dir[i + 1] = tmp;
            i = 0;
        }
    }
}
