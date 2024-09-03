/*
** EPITECH PROJECT, 2023
** double
** File description:
** scientifique
*/

#include "my.h"

#include <stdlib.h>


static char *rond(char *str, int j)
{
    if (str[j + 1] >= '5') {
        if (str[j] == '0' + 9)
            rond(str, j - 1);
        if (str[j] == '0' + 9)
            str[j] = 47;
        str[j] += 1;
    }
    return (str);
}

static void point(char *str, int precision)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((i == 1 && str[0] != '-') || (i == 2 && str[0] == '-')) {
            my_putchar('.');
        }
        my_putchar(str[i]);
        i++;
    }
    while (i < precision) {
        my_putchar('0');
        i++;
    }
}

void neg_maj(int *maj, int *zero)
{
    if (*maj == 1) {
        my_putchar('E');
    } else {
        my_putchar('e');
    }
    if (*zero != 0) {
        my_putchar('-');
    } else {
        my_putchar('+');
    }
}

int my_double(int *maj, int *vir, int *zero)
{
    int n = 0;

    neg_maj(&*maj, &*zero);
    if (*vir <= 9) {
        my_putchar('0');
        n += 1;
    }
    return (my_put_nbr(*vir) + n);
}

int more(double *nb, int *maj, int *i)
{
    if (*nb == 0) {
        my_putstr("0.000000");
        if (*maj == 1) {
            my_putchar('E');
        } else {
            my_putchar('e');
        }
        my_putstr("+00");
        return (12);
    }
    while (*nb >= 10 || *nb <= -10) {
        *nb = *nb / 10;
        *i = *i + 1;
    }
    return (0);
}

int my_double_to_scient(double nb, int maj, int precision)
{
    char test[10] = "";
    char *str = "";
    int i = 0;
    int zero = 0;

    if (more(&nb, &maj, &i) == 12)
        return (12);
    for (int j = 0; nb - (int) nb == nb; nb *= 10) {
        test[0] = '0';
        i++;
        zero++;
    }
    for (int i2 = 0; i2 < precision + 1; i2++)
        nb *= 10;
    str = my_nbr_to_str((int)(float)nb);
    str = rond(str, precision);
    str[my_strlen(str) - 1] = '\0';
    point(str, precision);
    i = my_double(&maj, &i, &zero);
    return (my_strlen(str) + 3 + i);
}
