/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_cat
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

static int error(void)
{
    write(2, "84", 2);
    return (84);
}

static int boucle(int n, char *buffer)
{
    while (n != 0) {
        n = read(0, buffer, sizeof(buffer));
        write(1, buffer, n);
    }
    return (n);
}

int my_cat(int ac, char **av)
{
    int file = 0;
    int n = 1;
    char buffer[20];

    if (ac <= 1) {
        n = boucle(n, buffer);
    }
    for (int i = 1; i < ac; i++) {
        file = open(av[i], O_RDONLY);
        if (file == -1 && n != 0) {
            return (error());
        }
        n = read(file, buffer, sizeof(buffer));
        while (n > 0) {
            write(1, buffer, n);
            n = read(file, buffer, sizeof(buffer));
        }
    }
    return (0);
}
