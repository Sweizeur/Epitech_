/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_double_to_hex
*/

#include "my.h"
static void end_preci2(char *str, int *i, int *n, int precision)
{
    while (*i < precision) {
        my_putchar('0');
        *i += 1;
        *n += 1;
    }
    if (precision == -1) {
        my_putstr(str);
        *n += 1;
    }
}

static int end_preci(char *str, int precision)
{
    int i = 0;
    int n = 0;

    if (str[0] == '\0')
        precision = 0;
    if (precision != 0) {
        my_putchar('.');
        n += 1;
    }
    while (i < precision && str[i] != '\0') {
        my_putchar(str[i++]);
        n += 1;
    }
    end_preci2(str, &i, &n, precision);
    return (n + 1);
}

static char *zero(char *str, unsigned int nbr, int *i)
{
    if (nbr == 0) {
        str[*i] = '0';
        *i += 1;
    }
    return (str);
}

static int my_a_base(unsigned long long nbr, int base, int maj, int precision)
{
    char str[32];
    int i = 0;

    zero(str, nbr, &i);
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
    my_putchar(str[0]);
    end_preci(&str[1], precision);
    return (i);
}

int pre_conv(double nb, double *nb2, int *i)
{
    int n = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
        *nb2 *= -1;
        n += 1;
    }
    while (*nb2 >= 2.0) {
        *nb2 /= 2;
        *i += 1;
    }
    while (*nb2 < 1) {
        *nb2 *= 2;
        *i -= 1;
    }
    while (*nb2 - (unsigned long long)*nb2 != 0) {
        *nb2 *= 16;
    }
    return (n);
}

int my_double_to_hex(double nb, int maj, int precision)
{
    int i = 0;
    int n = 0;
    double nb2 = nb;
    char x[3] = "0x";
    char p[2] = "p";

    n += pre_conv(nb, &nb2, &i);
    my_putstr(UP(x, maj));
    n += my_a_base(nb2, 16, 0, precision);
    my_putstr(UP(p, maj));
    if (i >= 0) {
        my_putchar('+');
        n += 1;
    }
    n += my_put_nbr(i);
    return (n + 3);
}
