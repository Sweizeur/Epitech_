/*
** EPITECH PROJECT, 2023
** mod
** File description:
** h
*/

#include "my.h"

#include <stdarg.h>


int flag_g(const char *format, va_list list, int *i)
{
    return my_f_or_e(va_arg(list, double), 0, 6);
}
