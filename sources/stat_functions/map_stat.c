/*
** EPITECH PROJECT, 2019
** map_stat.c
** File description:
** map_stat
*/

#include "struct.h"
#include "function.h"
#include "include.h"

void count_lines(char *map_path, context_t *ctx)
{
    struct stat file;
    int fd = open(map_path, O_RDONLY);
    char *buffer;
    ctx->lines = 1;

    stat(map_path, &file);
    buffer = malloc(sizeof(char *) * file.st_size);
    read(fd, buffer, file.st_size);
    close(fd);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            ctx->lines += 1;
    free(buffer);
}

int count_columns(char *map, int nb)
{
    int i = 0;

    while (map[nb] != '\n' && map[nb] != '\0') {
        i++;
        nb++;
    }
    return (i);
}