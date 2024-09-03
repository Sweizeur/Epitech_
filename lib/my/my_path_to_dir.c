/*
** EPITECH PROJECT, 2023
** Default
** File description:
** path_to_dir
*/

#include "my.h"

char *my_path_to_filename(char *file)
{
    for (int i = my_strlen(file); i >= 0; i--) {
        if (file[i] == '/')
            return (&file[i + 1]);
    }
    return (file);
}
