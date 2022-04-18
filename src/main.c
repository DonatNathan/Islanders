/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** It's a program that count the number of island on the map
*/

#include "../includes/island.h"

int main(int argc, char **argv)
{
    struct stat st;
    char *map;
    char **array;

    if (stat(argv[1], &st) == -1) {
        write(2, "invalid filepath\n", 17);
        return (84);
    }
    map = read_file(argv[1], st);
    array = str_to_array(map, '\n');
    count_island(array);
    for (int cmpt = 0; array[cmpt]; cmpt += 1)
        my_printf("%s", array[cmpt]);
    free_all(map, array);
    return (0);
}
