/*
** EPITECH PROJECT, 2023
** flag
** File description:
** x
*/

#include "my.h"

#include <stdarg.h>


int flag_x(const char *format, va_list list, int *i)
{
    return (my_putnbr_base(va_arg(list, int), 16, 0));
}
