/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** It's a program that count the number of island on the map
*/

#include "../includes/island.h"

int error_handling(int argc, char **argv)
{
    if (argc != 2) {
        write(2, "invalid number of params\n", 25);
        return (84);
    }
    return (0);
}
