/*
** EPITECH PROJECT, 2023
** flag
** File description:
** o
*/

#include "my.h"

#include <stdarg.h>


int flag_f(const char *format, va_list list, int *i)
{
    return my_double_f(va_arg(list, double), 0, 6);
}
