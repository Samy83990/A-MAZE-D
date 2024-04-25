/*
** EPITECH PROJECT, 2023
** amine
** File description:
** samy
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printf4(const char *format, int i, va_list args)
{
    int c;

    if (format[i] == 'd') {
        c = va_arg(args, int);
        my_put_nbr(c);
    }
    if (format[i] == 'i') {
        c = va_arg(args, int);
        my_put_nbr(c);
    }
    if (format[i] == 'p') {
        my_putstr(ptr(va_arg(args, long)));
    }
    return 0;
}
