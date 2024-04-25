/*
** EPITECH PROJECT, 2023
** B-CPE-110-MAR-1-1-organized-samy.chakrouni
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printf6(const char *format, int i, va_list args)
{
    if (format[i] == 'x') {
        my_putstr(hexadecimal(va_arg(args, int)));
    }
    if (format[i] == 'b') {
        my_putstr(binaire(va_arg(args, int)));
    }
    if (format[i] == 'o') {
        my_putstr(octet(va_arg(args, int)));
    }
    if (format[i] == 'X') {
        my_putstr(hexadecimal2(va_arg(args, int)));
    }
    i++;
    return 0;
}

static int my_printf3_2(const char *format, int i, va_list args)
{
    int *c;

    if (format[i] == 'n') {
        c = va_arg(args, int *);
        *c = i;
        i++;
    }
    if (format[i] == 'f') {
        my_float(va_arg(args, double));
    }
    if (format[i] == 'X') {
        my_printf6(format, i, args);
    }
    if (format[i] == 'u') {
        unsigne(va_arg(args, unsigned int));
    }
    return 0;
}

static int my_printf3(const char *format, int i, va_list args)
{
    int *c;

    if ((format[i] == 'X') || (format[i] == 'u'))
        my_printf3_2(format, i, args);
    if ((format[i] == 'n') || (format[i] == 'f'))
        my_printf3_2(format, i, args);
    if ((format[i] == 'd') || (format[i] == 'i') || (format[i] == 'p'))
        my_printf4(format, i, args);
    if ((format[i] == 's') || (format[i] == 'c') || (format[i] == '%'))
        my_printf5(format, i, args);
    if ((format[i] == 'x') || (format[i] == 'o') || (format[i] == 'b')) {
        my_printf6(format, i, args);
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list args;
    int i = 0;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            my_printf3(format, i, args);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return 0;
}
