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

int my_printf5(const char *format, int i, va_list args)
{
    int c;
    char *k;
    char j;

            if (format[i] == 's') {
                k = va_arg(args, char *);
                my_putstr(k);
                i++;
            }
            if (format[i] == 'c') {
                j = va_arg(args, int);
                my_putchar(j);
            }
            if (format[i] == '%') {
                my_putchar('%');
            }
    return 0;
}
