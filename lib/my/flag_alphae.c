/*
** EPITECH PROJECT, 2023
** flag
** File description:
** o
*/

#include "my.h"

#include <stdarg.h>


int flag_alphae(const char *format, va_list list, int *i)
{
    return my_double_to_scient(va_arg(list, double), 1, 6);
}
