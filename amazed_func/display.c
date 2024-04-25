/*
** EPITECH PROJECT, 2024
** B-CPE-200-MAR-2-1-amazed-samy.chakrouni
** File description:
** display
*/

#include "my.h"

void disp_data(data_t Data_t)
{
    my_printf("#number_of_robots\n%d\n", Data_t.a_count);
    my_printf("#rooms\n");
    display_rooms(Data_t.rooms);
    display_end(Data_t.tunnels);
    my_printf("#tunnels\n");
    display_tunnels(Data_t.tunnels);
    my_printf("\n#moves\n");
    display_moves_robot(Data_t);
}

static void display_rooms(char **rooms)
{
    for (int i = 0; rooms[i] != NULL; i++) {
        if (my_strncmp(rooms[i], "##end", 5) == 0) {
            my_printf("%s", rooms[i]);
        } else
            my_printf("%s", rooms[i]);
    }
}

void display_end(char **rooms)
{
    for (int i = 0; rooms[i] != NULL; i++) {
        if (my_strchr(rooms[i], '-') == NULL)
            my_printf("%s", rooms[i]);
    }
}

void display_tunnels(char **tunnels)
{
    for (int i = 0; tunnels[i] != NULL; i++) {
        if (my_strchr(tunnels[i], '-') != NULL)
            my_printf("%s", tunnels[i]);
    }
}

void display_moves_robot_robot2(data_t data_t, int *as_positions,
    int current_room, int move_made)
{
    for (int i = 0; i < data_t.a_count; i++) {
        if (as_positions[i] == current_room &&
            data_t.tunnels[current_room] != NULL) {
            display_next_move(i, as_positions, current_room, data_t);
            move_made = 1;
        }
    }
}

void display_moves_robot(data_t Data_t)
{
    int *as_positions = malloc(sizeof(int) * Data_t.a_count);
    int move_made;
    int current_room = 0;

    if (!as_positions)
        return;
    initialize_positions(Data_t.a_count, as_positions);
    while (1) {
        move_made = 0;
        for (int i = 0; i < Data_t.a_count; i++) {
            if (as_positions[i] == current_room &&
                Data_t.tunnels[current_room] != NULL) {
                display_next_move(i, as_positions, current_room, Data_t);
                move_made = 1;
            }
        }
        if (!move_made)
            break;
        current_room++;
    }
}

static void initialize_positions(int a_count, int *as_positions)
{
    for (int i = 0; i < a_count; i++)
        as_positions[i] = 0;
}

static void display_next_move(int a_index, int *as_positions,
    int current_room, data_t Data_t)
{
    char *room1 = my_strtok(Data_t.tunnels[current_room], "-");
    char *room2 = my_strtok(NULL, "-");
    int next_room;

    if (my_atoi(room1) == current_room)
        next_room = my_atoi(room2);
    else
        next_room = my_atoi(room1);
    my_printf("P%d-%d ", a_index + 1, next_room + 1);
    as_positions[a_index] = next_room;
}
