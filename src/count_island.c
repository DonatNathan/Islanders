/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** It's a program that count the number of island on the map
*/

#include "../includes/island.h"

void change_isle(char **world, int cmpt_line, int cmpt_char, int cmpt_island)
{
    if (world[cmpt_line][cmpt_char] == 'X') {
        world[cmpt_line][cmpt_char] = cmpt_island + 48;
        if (world[cmpt_line + 1])
            change_isle(world, cmpt_line + 1, cmpt_char, cmpt_island);
        if (cmpt_line > 1)
            change_isle(world, cmpt_line - 1, cmpt_char, cmpt_island);
        if (world[cmpt_line][cmpt_char + 1] != '\0')
            change_isle(world, cmpt_line, cmpt_char + 1, cmpt_island);
        if (cmpt_char > 0)
            change_isle(world, cmpt_line, cmpt_char - 1, cmpt_island);
    }
}

int test_case(char **world, int cmpt_line, int cmpt_char, int cmpt_island)
{
    if (world[cmpt_line][cmpt_char] == 'X')
        cmpt_island += 1;
    change_isle(world, cmpt_line, cmpt_char, cmpt_island);
    return (cmpt_island);
}

int walk_in_map(char **world, int cmpt_island, int cmpt)
{
    int cmpt_line;
    int cmpt_char;

    for (cmpt_line = 1; cmpt_line < cmpt; cmpt_line += 1) {
        for (cmpt_char = 0; world[cmpt_line][cmpt_char] != '\0';
        cmpt_char += 1) {
            cmpt_island = test_case(world, cmpt_line, cmpt_char, cmpt_island);
        }
    }
    return (cmpt_island);
}

void count_island(char **world)
{
    int cmpt = 0;
    int nb_isle = 0;

    while (world[cmpt] != 0)
        cmpt += 1;
    nb_isle = walk_in_map(world, nb_isle, cmpt);
}
