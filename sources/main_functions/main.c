/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "function.h"

int main(int ac, char **av)
{
    int agr_nb_error = check_number_arg(ac);
    int arg_error;

    if (agr_nb_error == 1)
        return (84);
    arg_error = check_arg(av[1]);
    if (arg_error == 1)
        return (84);
    if (arg_error == 2)
        return (0);
    sokoban(av[1]);
}