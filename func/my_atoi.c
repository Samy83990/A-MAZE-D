/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return sign * res;
}

int my_atoi_error(char *str)
{
    while (*str != '\0') {
        if ((*str < '0' || *str > '9') && *str != '-')
            return 1;
        str = str + 1;
    }
    return 0;
}
