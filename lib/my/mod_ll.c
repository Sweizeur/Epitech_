/*
** EPITECH PROJECT, 2023
** mod
** File description:
** h
*/

#include "my.h"

#include <stdarg.h>


static int decimal(const char *format, long long *nb, int *i)
{
    if (*nb < 0)
        *nb -= 18446744073709551616;
    if (format[*i + 3] == 'd' || format[*i + 2] == 'i') {
        *i += 2;
        return (my_put_nbr((unsigned long long)nb));
    }
}

int mod_ll(const char *format, unsigned long long nb2, int *i)
{
    char *func = "ouxX";
    int base = 8;
    int maj = 0;
    unsigned long long nb = (unsigned long long)nb2;
    int (*abase)(unsigned long long, int, int) = my_putnbr_base;

    decimal(format, &nb, &*i);
    for (int j = 0; func[j] != '\0'; j += 1) {
        if (func[j] == 'u')
            base = 10;
        if (func[j] == 'x')
            base = 16;
        if (func[j] == 'X')
            maj = 1;
        if (format[*i + 3] == func[j]) {
            *i += 2;
            return (abase(nb, base, maj));
        }
    }
}
