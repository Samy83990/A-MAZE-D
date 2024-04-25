/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** main
*/

#include "my.h"

int nbr_rooms(char *room_line)
{
    char *token = my_strtok(room_line, " ");

    return my_atoi(token);
}

void free_mem(data_t data)
{
    for (int i = 0; data.rooms[i] != NULL; i++)
        free(data.rooms[i]);
    free(data.rooms);
    for (int i = 0; data.tunnels[i] != NULL; i++)
        free(data.tunnels[i]);
    free(data.tunnels);
}

int main(int argc, char **argv)
{
    data_t data;

    data = lire_sortie_parsing(stdin);
    disp_data(data);
    free_mem(data);
    return 0;
}
