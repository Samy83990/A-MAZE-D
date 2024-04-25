/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-robotfactory-samy.chakrouni
** File description:
** my_strtok
*/

#include "my.h"

char *my_strtok(char *str, const char *delim)
{
    op_t s = {NULL};

    if (str != NULL)
        s.i = str;
    else if (s.i == NULL)
        return NULL;
    s.start = s.i;
    while (*s.i != '\0' && my_strchr(delim, *s.i) != NULL)
        s.i++;
    if (*s.i == '\0') {
        s.i = NULL;
        return NULL;
    }
    s.start = s.i;
    while (*s.i != '\0' && my_strchr(delim, *s.i) == NULL)
        s.i++;
    if (*s.i == '\0')
        s.i = NULL;
    return s.start;
}
