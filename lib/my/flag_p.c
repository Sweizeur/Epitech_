/*
** EPITECH PROJECT, 2023
** flag
** File description:
** x
*/

#include "my.h"

#include <stdarg.h>


int flag_p(const char *format, va_list list, int *i)
{
    return my_pointer(va_arg(list, void *));
}
