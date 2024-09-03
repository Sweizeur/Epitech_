/*
** EPITECH PROJECT, 2023
** printf
** File description:
** pointer
*/

#include "my.h"

#include <stdio.h>


static const int (*point[])(double, int, int) = {
    my_double_f,
    my_double_f,
    my_double_to_scient,
    my_double_to_scient,
    my_double_to_hex,
    my_double_to_hex
};

static int puissance(int n, int m)
{
    int nb = 1;

    if (m == 0)
        return (1);
    for (int i = 0; i < m; i++) {
        nb *= n;
    }
    return (nb);
}

static char to_pointer(const char *format, char precision, int *nombre, int *i)
{
    for (int j = 1; j < 4; j++) {
        if (precision >= 48 && precision <= 57) {
            *nombre += ((precision - 48) * puissance(10, j - 1));
            precision = format[*i + 2 + j];
            *i += 1;
        }
    }
    return (precision);
}

int int_rev(int nb)
{
    int n = 0;
    int len = my_intlen(nb);

    while (nb > 0) {
        n += (nb % 10) * puissance(10, len - 1);
        nb /= 10;
        len--;
    }
    return n;
}

int is_int(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int my_precision(const char *format, double nb, int *i)
{
    char precision = format[*i + 2];
    int nombre = 0;
    int maj;
    char *str = "fFeEaA";

    precision = to_pointer(format, precision, &nombre, i);
    nombre = int_rev(nombre);
    for (int k = 0; str[k] != '\0'; k += 1) {
        if (k % 2 != 0)
            maj = 1;
        if (k % 2 == 0)
            maj = 0;
        if (format[*i + 2] == str[k]) {
            *i += 1;
            return (point[k](nb, maj, nombre));
        }
    }
    return (0);
}
