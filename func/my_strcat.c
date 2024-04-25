/*
** EPITECH PROJECT, 2024
** B-PSU-200-MAR-2-1-minishell2-samy.chakrouni
** File description:
** my_strcat
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *fin = malloc(my_strlen(dest) + my_strlen(src) + 1);

    my_strcpy(fin, dest);
    my_strcpy(fin + my_strlen(dest), src);
    return fin;
}
