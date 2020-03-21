/*
** EPITECH PROJECT, 2019
** main_error.c
** File description:
** main_error
*/

#include "function.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

int check_number_arg(int ac)
{
    if (ac > 2) {
        my_putstr("Too much arguments. Type -h for help\n");
        return (1);
    } else if (ac < 2) {
        my_putstr("Too few arguments. Type -h for help\n");
        return (1);
    }
    return (0);
}

int check_arg(char *arg)
{
    if (arg[0] == '-' && arg[1] == 'h' && arg[2] == '\0') {
        display_help();
        return (2);
    }
    if (open(arg, __O_DIRECTORY) > 0) {
        my_putstr("This is a directory.\n");
        return (1);
    } else if (open(arg, O_RDONLY) < 0) {
        my_putstr("File not found. Please try again.\n");
        return (1);
    }
    return (0);
}