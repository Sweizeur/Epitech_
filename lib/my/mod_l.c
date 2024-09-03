/*
** EPITECH PROJECT, 2023
** mod
** File description:
** h
*/

#include "my.h"

#include <stdarg.h>


static int decimal(const char *format, int *i, long long *nb)
{
    if (*nb < 0)
        *nb -= 4294967296;
    if (format[*i + 2] == 'd' || format[*i + 2] == 'i') {
        *i += 1;
        return (my_put_nbr((unsigned long long)nb));
    }
}

static int fpointer(const char *format, unsigned int nb, int *i)
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

int mod_l(const char *format, va_list list, int *i)
{
    int base = 8;
    int maj = 0;
    long long nb = (unsigned long long)va_arg(list, long long);

    if (format[*i + 2] == 'l')
        return mod_ll(format, (long long)nb, &*i);
    decimal(format, &*i, &nb);
    fpointer(format, nb, &*i);
}
