/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** Return the length of a string
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}