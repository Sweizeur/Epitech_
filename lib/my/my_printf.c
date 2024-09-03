/*
** EPITECH PROJECT, 2023
** week2
** File description:
** mini_printf
*/

#include "my.h"

#include <stdarg.h>


static const int (*flag[])(const char *format, va_list, int *i) = {
    flag_d_i, flag_d_i, flag_s, flag_c, flag_percent,
    flag_o, flag_u, flag_x, flag_alphax, flag_e,
    flag_alphae, flag_f, flag_alphaf, flag_p, flag_point,
    flag_a, flag_alphaa, flag_g, mod_h, mod_l, mod_alphal
};

int istype(const char *format, int *i, va_list list)
{
    int nb = -1;
    char *flags = "disc%ouxXeEfFp.aAghlL";

    for (int j = 0; flags[j] != '\0'; j += 1) {
        if (format[*i] == '%' && format[*i + 1] == flags[j]) {
            nb = flag[j](format, list, &*i);
            return (nb);
        }
    }
    return (nb);
}

int loop(const char *format, va_list list)
{
    int i = 0;
    int n;
    int nb = 0;
    int (*ist)(const char *, int *, va_list) = istype;

    while (format[i] != '\0') {
        n = (*ist)(format, &i, list);
        if (n == -1) {
            my_putchar(format[i]);
            nb += 1;
        }
        if (n >= 0) {
            i += 1;
            nb += n;
        }
        i += 1;
    }
    return (nb);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int nb;

    va_start(list, format);
    nb = loop(format, list);
    va_end(list);
    return nb;
}
