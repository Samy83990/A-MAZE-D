/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** unsigned
*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int unsigne(unsigned int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return 0;
}
