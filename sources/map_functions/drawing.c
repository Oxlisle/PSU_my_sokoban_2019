/*
** EPITECH PROJECT, 2019
** drawing.c
** File description:
** drawing
*/

#include "include.h"
#include "struct.h"
#include "function.h"

void check_player(context_t *ctx, char c, int x, int y)
{
    if (c == 'P') {
        ctx->player.x = x;
        ctx->player.y = y;
    }
}

void draw_map(context_t *ctx)
{
    int j = 0;

    for (int i = 0; i < ctx->lines; i++)
        mvprintw(i, 0, ctx->map[i]);
    for (int i = 0; i < ctx->lines; i++) {
        ctx->columns = count_columns(ctx->buffer, j);
        for (int k = 0; k <= ctx->columns; k++, j++)
            check_player(ctx, ctx->map[i][k], k, i);
    }
}