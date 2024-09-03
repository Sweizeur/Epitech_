/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** float_to_str
*/

#include "my.h"

#include <stdio.h>


static char *rond(char *str, int j, int *c, int *precision)
{
    if (str[j + 1] >= '5') {
        if (str[j] == '0' + 9)
            rond(str, j - 1, &*c, &*precision);
        if (str[j] == '0' + 9)
            str[j] = 47;
        str[j] += 1;
        if (str[j] == '0' && (j == 0 || str[0] < 48)) {
            str[j] = '1';
            str[*c + *precision + 1] = '0';
            *c += 1;
        }
    }
    return (str);
}

int putall(char *str, int c, int precision)
{
    int i = 0;
    int j = 0;

    if (str[i] == '-') {
        my_putchar(str[i++]);
        c += 1;
        str = &str[1];
    }
    str = rond(str, c + precision, &c, &precision);
    while (i <= c) {
        my_putchar(str[i]);
        i += 1;
    }
    my_putchar('.');
    for (j = 0 + i; j <= precision + i - 1; j += 1) {
        my_putchar(str[j]);
    }
    return (0);
}

int infinity(double *nb, char *str, int *c)
{
    double long tmp = *nb;
    int n = 0;

    while (tmp >= 1) {
        tmp = tmp / 10;
        n += 1;
        if (n >= 309)
            return (3);
    }
    if (*nb < 1 && *nb > 0)
        str[my_strlen(str)] = '0';
    while (*nb >= 10) {
        *c += 1;
        *nb = *nb / 10;
    }
    return (0);
}

int my_double_f(double nb, int maj, int precision)
{
    char str[1000] = "";
    int c = 0;
    double nb2 = nb;

    if (nb < 0) {
        str[0] = '-';
        nb = -nb;
        nb2 = -nb2;
    }
    if (infinity(&nb, str, &c) == 3)
        return (maj == 1 ? (my_putstr("INF")) : (my_putstr("inf")));
    str[my_strlen(str)] = '0' + (int) nb;
    for (int i = 0; i < c + precision + 1; i += 1) {
        nb -= (int) nb;
        nb *= 10;
        str[my_strlen(str)] = '0' + (int) nb;
    }
    putall(str, c, precision);
    return ((nb2 < 1 && nb2 > 0) ? (my_strlen(str) - 1) : (my_strlen(str)));
}
