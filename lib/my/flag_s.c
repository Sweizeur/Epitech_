/*
** EPITECH PROJECT, 2023
** flag
** File description:
** s
*/

#include "my.h"

#include <stdarg.h>


int flag_s(const char *format, va_list list, int *i)
{
    return (my_putstr(va_arg(list, char *)));
}
