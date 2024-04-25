/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** my_get_nbr
*/

#include "my.h"

int my_getnbr(char *str)
{
    int val = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            val = val * 10;
            val = val + *str - '0';
        } else
            return (-1);
        str++;
    }
    return val;
}

int my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}
