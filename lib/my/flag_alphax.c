/*
** EPITECH PROJECT, 2023
** flag
** File description:
** X
*/

#include "my.h"

#include <stdarg.h>


int flag_alphax(const char *format, va_list list, int *i)
{
    return (my_putnbr_base(va_arg(list, int), 16, 1));
}
