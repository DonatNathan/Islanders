/*
** EPITECH PROJECT, 2022
** ISLAND_H
** File description:
** It's the file that contain prototypes of my program
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

void free_all(char *map, char **array);
char *read_file(char *filepath, struct stat st);
void count_island(char **world);
