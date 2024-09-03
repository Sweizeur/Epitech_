/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** pointer
*/

#include "my.h"

#include <stdio.h>


int my_pointer(void *pointer)
{
    my_putstr("0x");
    return (2 + my_putnbr_base((unsigned int)pointer, 16, 0));
}
