/*
** EPITECH PROJECT, 2019
** function.h
** File description:
** function
*/

#include "struct.h"

#ifndef FUNCTION_H_
#define FUNCTION_H_

int move_up(context_t *ctx);
int move_down(context_t *ctx);
int move_right(context_t *ctx);
int move_left(context_t *ctx);
void detect_end(context_t *ctx);
void count_lines(char *map_path, context_t *ctx);
void load_map(char *map_file, context_t *ctx);
int invalid_map(char *map_path);
int my_nstrlen(char *str, int nb);
void draw_map(context_t *ctx);
void detect_event(context_t *ctx);
int sokoban(char *map_file);
int count_columns(char *map, int nb);
int check_number_arg(int ac);
int check_arg(char *arg);
void my_putchar(char c);
void my_putnbr(int nb);
void display_help(void);
void my_putstr(char const *str);
int my_strlen(char *str);

#endif /* !FUNCTION_H_ */