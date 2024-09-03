/*
** EPITECH PROJECT, 2023
** mod
** File description:
** h
*/

#include "my.h"

#include <stdarg.h>


int mod_alphal(const char *format, va_list list, int *i)
{
    if (format[*i + 2] == 'a' || format[*i + 2] == 'e' ||
        format[*i + 2] == 'f' || format[*i + 2] == 'g')
        my_putstr("nan");
    if (format[*i + 2] == 'A' || format[*i + 2] == 'E' ||
        format[*i + 2] == 'F' || format[*i + 2] == 'G')
        my_putstr("NAN");
}
