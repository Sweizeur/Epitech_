/*
** EPITECH PROJECT, 2023
** flag
** File description:
** u
*/

#include "my.h"

#include <stdarg.h>


int flag_u(const char *format, va_list list, int *i)
{
    return (my_putnbr_base(va_arg(list, int), 10, 0));
}
