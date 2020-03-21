/*
** EPITECH PROJECT, 2019
** move.c
** File description:
** move
*/

#include "struct.h"
#include "function.h"
#include "include.h"

int move_up(context_t *ctx)
{
    if (ctx->map[ctx->player.y - 1][ctx->player.x] == '#')
        return (0);
    else if (ctx->map[ctx->player.y - 1][ctx->player.x] == 'X') {
        if (ctx->map[ctx->player.y - 2][ctx->player.x] == '#')
            return (0);
        if (ctx->map[ctx->player.y - 2][ctx->player.x] == 'X')
            return (0);
        ctx->map[ctx->player.y - 2][ctx->player.x] = 'X';
        ctx->map[ctx->player.y - 1][ctx->player.x] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    } else {
        ctx->map[ctx->player.y - 1][ctx->player.x] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    }
    return (0);
}

int move_down(context_t *ctx)
{
    if (ctx->map[ctx->player.y + 1][ctx->player.x] == '#')
        return (0);
    else if (ctx->map[ctx->player.y + 1][ctx->player.x] == 'X') {
        if (ctx->map[ctx->player.y + 2][ctx->player.x] == '#')
            return (0);
        if (ctx->map[ctx->player.y + 2][ctx->player.x] == 'X')
            return (0);
        ctx->map[ctx->player.y + 2][ctx->player.x] = 'X';
        ctx->map[ctx->player.y + 1][ctx->player.x] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    } else {
        ctx->map[ctx->player.y + 1][ctx->player.x] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    }
    return (0);
}

int move_left(context_t *ctx)
{
    if (ctx->map[ctx->player.y][ctx->player.x - 1] == '#')
        return (0);
    else if (ctx->map[ctx->player.y][ctx->player.x - 1] == 'X') {
        if (ctx->map[ctx->player.y][ctx->player.x - 2] == '#')
            return (0);
        if (ctx->map[ctx->player.y][ctx->player.x - 2] == 'X')
            return (0);
        ctx->map[ctx->player.y][ctx->player.x - 2] = 'X';
        ctx->map[ctx->player.y][ctx->player.x - 1] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    } else {
        ctx->map[ctx->player.y][ctx->player.x - 1] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    }
    return (0);
}

int move_right(context_t *ctx)
{
    if (ctx->map[ctx->player.y][ctx->player.x + 1] == '#')
        return (0);
    else if (ctx->map[ctx->player.y][ctx->player.x + 1] == 'X') {
        if (ctx->map[ctx->player.y][ctx->player.x + 2] == '#')
            return (0);
        if (ctx->map[ctx->player.y][ctx->player.x + 2] == 'X')
            return (0);
        ctx->map[ctx->player.y][ctx->player.x + 2] = 'X';
        ctx->map[ctx->player.y][ctx->player.x + 1] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    } else {
        ctx->map[ctx->player.y][ctx->player.x + 1] = 'P';
        if (ctx->map_save[ctx->player.y][ctx->player.x] == 'O')
            ctx->map[ctx->player.y][ctx->player.x] = 'O';
        else
            ctx->map[ctx->player.y][ctx->player.x] = ' ';
    }
    return (0);
}