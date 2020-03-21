/*
** EPITECH PROJECT, 2019
** sokoban.c
** File description:
** sokoban
*/

#include "function.h"
#include "struct.h"
#include "include.h"


void game_loop(context_t *ctx)
{
    initscr();
    keypad(stdscr, 1);
    while (ctx->ch != 'a') {
        draw_map(ctx);
        detect_event(ctx);
        refresh();
        if (ctx->game == 1)
            ctx->ch = 'a';
        clear();
    }
    endwin();
}

int sokoban(char *map_file)
{
    context_t ctx;

    if (invalid_map(map_file))
        return (84);
    count_lines(map_file, &ctx);
    load_map(map_file, &ctx);
    game_loop(&ctx);
    return (0);
}

/*
    for (int z = 0; z != ctx.lines; z++)
        my_putstr(ctx.map[z]);
    //
    //if (ctx.game == 1)
    //    return (1);
*/