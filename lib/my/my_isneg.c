/*
** EPITECH PROJECT, 2023
** Default
** File description:
** my_isneg
*/

#include "my.h"

#include <stdio.h>

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    } else {
        my_putchar(80);
    }
}
