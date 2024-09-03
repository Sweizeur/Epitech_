/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** r
*/

#include "my.h"
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
