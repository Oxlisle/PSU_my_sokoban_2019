/*
** EPITECH PROJECT, 2019
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct context_s context_t;
typedef struct position_s position_t;

struct position_s
{
    int x;
    int y;
};

struct context_s
{
    position_t player;
    int lines;
    int columns;
    int game;
    int ch;
    char *buffer;
    char **map;
    char **map_save;
};

#endif /* !STRUCT_H_ */