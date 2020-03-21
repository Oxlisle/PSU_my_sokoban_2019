/*
** EPITECH PROJECT, 2019
** end_ctx.c
** File description:
** end_ctx
*/

#include "struct.h"
#include "function.h"
#include "include.h"

int is_box(char c, int nb)
{
    if (c == 'X')
        nb += 1;
    return (nb);
}

int is_good_box(char c, char d, int nb)
{
    if (c == 'X' && d == 'O')
        nb += 1;
    return (nb);
}

int victory(context_t *ctx)
{
    int good_boxes = 0;
    int boxes = 0;

    for (int i = 0; i != ctx->lines; i++)
        for (int k = 0; k < ctx->columns; k++) {
            boxes = is_box(ctx->map[i][k], boxes);
            good_boxes = is_good_box(ctx->map[i][k], \
            ctx->map_save[i][k], good_boxes);
        }
    if (good_boxes == boxes)
        return (1);
    return (0);
}

void detect_end(context_t *ctx)
{
    if (victory(ctx))
        ctx->game = 1;
    else
        ctx->game = 0;
}