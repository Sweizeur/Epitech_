/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task18
*/

#include "my.h"

static char *zero(char *str, unsigned long long nbr, int *i)
{
    if (nbr == 0) {
        str[*i] = '0';
        *i += 1;
    }
    return (str);
}

int my_putnbr_base(unsigned long long nbr, int base, int maj)
{
    char str[32];
    int i = 0;

    zero(str, nbr, &i);
    if (base > 36)
        return (-84);
    while (nbr > 0) {
        if (nbr % base >= 10) {
            str[i] = 'a' + (nbr % base) - 10;
        } else {
            str[i] = '0' + (nbr % base);
        }
        i += 1;
        nbr = nbr / base;
    }
    str[i] = '\0';
    my_revstr(str);
    if (maj == 1)
        my_strupcase(str);
    return (my_putstr(str));
}
