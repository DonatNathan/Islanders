/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** It's a program that count the number of island on the map
*/

#include "../includes/island.h"

char *read_file(char *filepath, struct stat st)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[st.st_size];
    char *map = malloc(sizeof(char) * (st.st_size + 2));

    read(fd, buffer, st.st_size);
    for (int cmpt = 0; cmpt < st.st_size; cmpt += 1)
        map[cmpt] = buffer[cmpt];
    map[st.st_size] = '\n';
    map[st.st_size + 1] = '\0';
    return (map);
}

void free_all(char *map, char **array)
{
    free(map);
    for (int cmpt = 0; array[cmpt]; cmpt += 1)
        free(array[cmpt]);
    free(array);
}
