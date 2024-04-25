/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-robotfactory-samy.chakrouni
** File description:
** my_strchr
*/

#include "my.h"

char *my_strchr(const char *str, char c)
{
    while (*str != '\0') {
        if (*str == c) {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}
