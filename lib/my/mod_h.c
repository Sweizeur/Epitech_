/*
** EPITECH PROJECT, 2023
** mod
** File description:
** h
*/

#include "my.h"

#include <stdarg.h>


static int decimal(const char *format, int *i, short *nb)
{
    if (*nb < 0)
        *nb -= 65536;
    if (format[*i + 2] == 'd' || format[*i + 2] == 'i') {
        *i += 1;
        return (my_put_nbr((unsigned long long)nb));
    }
}

int fpointer(const char *format, unsigned int nb, int *i)
{
    char *func = "ouxX";
    int base = 8;
    int maj = 0;
    int (*abase)(unsigned long long, int, int) = my_putnbr_base;

    for (int j = 0; func[j] != '\0'; j += 1) {
        if (func[j] == 'u')
            base = 10;
        if (func[j] == 'x')
            base = 16;
        if (func[j] == 'X')
            maj = 1;
        if (format[*i + 2] == func[j]) {
            *i += 1;
            return (abase(nb, base, maj));
        }
    }
}

int mod_h(const char *format, va_list list, int *i)
{
    int base = 8;
    int maj = 0;
    unsigned short nb = (unsigned short)va_arg(list, int);

    if (format[*i + 2] == 'h')
        return mod_hh(format, (int)nb, &*i);
    decimal(format, &*i, &nb);
    fpointer(format, nb, &*i);
}
