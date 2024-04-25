/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** my_strdup
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int j = 0;
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[j] != '\0') {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return dest;
}
