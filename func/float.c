/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** float
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_float(double nb)
{
    int f;

    f = nb;
    my_put_nbr(f);
    nb = nb - f;
    my_putchar('.');
    for (int i = 0; i < 6; i++) {
        nb = nb * 10;
        f = nb;
        my_put_nbr(f);
        nb = nb - f;
    }
    return f;
}
