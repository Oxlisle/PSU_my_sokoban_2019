/*
** EPITECH PROJECT, 2019
** event.c
** File description:
** event
*/

#include "function.h"
#include "include.h"
#include "struct.h"

void detect_event(context_t *ctx)
{
    ctx->ch = getch();

    if (ctx->ch == KEY_UP)
        move_up(ctx);
    if (ctx->ch == KEY_DOWN)
        move_down(ctx);
    if (ctx->ch == KEY_LEFT)
        move_left(ctx);
    if (ctx->ch == KEY_RIGHT)
        move_right(ctx);
    if (ctx->ch == ' ')
        ctx->map = ctx->map_save;
}