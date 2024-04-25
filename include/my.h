/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** my
*/

#ifndef MY_H
    #define MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define MAX_ROOMS 1000
    #define MAX_TUNNELS 1000
    #define LINE_LENGTH 100

typedef struct {
    int a_count;
    char **rooms;
    char **tunnels;
} data_t;

typedef struct {
    char *i;
    char *start;
} op_t;

int my_put_nbr(int nb);
int my_getnbr(char *str);
data_t lire_sortie_parsing(FILE *file);
int nbr_rooms(char *room_line);
char *hexadecimal2(int nb);
void disp_data(data_t data);
int my_float(double nb);
char *hexadecimal(int nb);
static void display_rooms(char **rooms);
void display_tunnels(char **tunnels);
void display_moves_robot(data_t data);
int my_printf(const char *format, ...);
void dijkstra(data_t data, int start, int end);
static void initialize_positions(int a_count, int *as_positions);
static void display_next_move(int a_index, int *as_positions,
    int current_room, data_t data);
char *my_strchr(const char *str, char c);
void free_data(data_t data);
char *my_strtok(char *str, const char *delim);
void my_putstr(const char *str);
void display_end(char **rooms);
char **lire_salles(FILE *file, char **line,
    size_t *line_length, int *room_count);
int string_len(char *src, char find);
int my_strncmp(const char *str1, const char *str2, size_t n);
char *my_strdup(const char *src);
int my_atoi(char *str);
char *binaire(int nb);
char **lire_tunnels(FILE *file, char **line,
    size_t *line_length, int *tunnel_count);
int my_printf5(const char *format, int i, va_list args);
int my_printf4(const char *format, int i, va_list args);
char *octet(int nb);
char *ptr(long format);
int unsigne(unsigned int nb);
char *my_strcpy(char *dest, const char *src);
int my_strlen(const char *src);
int my_strcmp(const char *s1, const char *s2);
void my_putchar(char c);
char *my_strdup(char const *src);

#endif
