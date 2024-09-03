/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_nbr_to_str
*/

#include "my.h"

#include <stdlib.h>


char *my_nbr_to_str(int n)
{
    char *str = malloc(sizeof(char) * 12);
    char tmp[12];
    char *sub_str;
    int i = 0;

    if (n < 0) {
        str[i] = '-';
        i += 1;
        n = -n;
    }
    if (n >= 10) {
        sub_str = my_nbr_to_str(n / 10);
        my_strncpy(str + i, sub_str, my_strlen(sub_str));
        i += my_strlen(sub_str);
        free(sub_str);
    }
    str[i] = '0' + (n % 10);
    str[i + 1] = '\0';
    return (str);
}
