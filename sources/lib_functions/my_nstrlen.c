/*
** EPITECH PROJECT, 2019
** my_nstrlen.c
** File description:
** A strlen function for the project
*/

int my_nstrlen(char *str, int nb)
{
    int i = 0;

    while (str[nb] != '\n' && str[nb] != '\0') {
        i++;
        nb++;
    } return (i);
}