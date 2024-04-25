/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** output
*/

#include "my.h"

data_t lire_sortie_parsing(FILE *file)
{
    data_t data;
    char *line = NULL;
    size_t line_length = 0;
    int room_count = 0;
    int tunnel_count = 0;

    if (getline(&line, &line_length, file) == -1)
        my_putstr("Erreur de lecture du fichier.\n");
    data.a_count = my_atoi(line);
    data.rooms = lire_salles(file, &line, &line_length, &room_count);
    data.tunnels = lire_tunnels(file, &line, &line_length, &tunnel_count);
    free(line);
    return data;
}

char **lire_salles(FILE *file, char **line,
    size_t *line_length, int *room_count)
{
    char **rooms = malloc(sizeof(char *) * MAX_ROOMS);

    if (!rooms)
        my_putstr("Erreur d'allocation mémoire pour les salles.\n");
    while (getline(line, line_length, file) != -1) {
        rooms[*room_count] = my_strdup(*line);
        if (!rooms[*room_count])
            my_putstr("Erreur d'allocation mémoire pour une salle.\n");
        (*room_count)++;
        if (my_strncmp(*line, "##end", 5) == 0)
            break;
    }
    return rooms;
}

char **lire_tunnels(FILE *file, char **line,
    size_t *line_length, int *tunnel_count)
{
    char **tunnels = malloc(sizeof(char *) * MAX_TUNNELS);

    if (!tunnels)
        my_putstr("Erreur d'allocation mémoire pour les tunnels.\n");
    while (getline(line, line_length, file) != -1) {
        tunnels[*tunnel_count] = my_strdup(*line);
        if (!tunnels[*tunnel_count])
            my_putstr("Erreur d'allocation mémoire pour un tunnel.\n");
        (*tunnel_count)++;
    }
    return tunnels;
}
