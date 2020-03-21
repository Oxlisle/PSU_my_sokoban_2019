/*
** EPITECH PROJECT, 2019
** map_loader.c
** File description:
** map_loader
*/

#include "include.h"
#include "function.h"
#include "struct.h"

void load_map(char *map_file, context_t *ctx)
{
    struct stat file;
    int fd = open(map_file, O_RDONLY);
    int j = 0;

    stat(map_file, &file);
    ctx->buffer = malloc(sizeof(char *) * file.st_size);
    read(fd, ctx->buffer, file.st_size);
    close(fd);
    ctx->map = malloc(sizeof(char **) * ctx->lines);
    ctx->map_save = malloc(sizeof(char **) * ctx->lines);
    for (int i = 0; i != ctx->lines; i++) {
        ctx->columns = count_columns(ctx->buffer, j);
        ctx->map[i] = malloc(sizeof(char *) * ctx->columns);
        ctx->map_save[i] = malloc(sizeof(char *) * ctx->columns);
        for (int k = 0; k <= ctx->columns; k++, j++) {
            ctx->map[i][k] = ctx->buffer[j];
            ctx->map_save[i][k] = ctx->buffer[j];
        }
    }
}