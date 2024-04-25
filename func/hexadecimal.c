/*
** EPITECH PROJECT, 2023
** amine
** File description:
** projet
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include <stdlib.h>

char *hexadecimal(int nb)
{
    int i = 0, p, res;
    char *titi = malloc(50);
    char temp;

    while (nb != 0) {
        res = nb % 16;
        if (res < 10) {
            titi[i] = res + '0';
        } else {
            titi[i] = res - 10 + 'a';
        }
        i++;
        nb = nb / 16;
    }
    for (p = 0; p < i / 2; p++) {
        temp = titi[p];
        titi[p] = titi[i - p - 1];
        titi[i - p - 1] = temp;
    }
    return titi;
}
