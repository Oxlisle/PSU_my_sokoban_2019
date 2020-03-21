/*
** EPITECH PROJECT, 2019
** map_error.c
** File description:
** map_error
*/

#include "include.h"
#include "struct.h"
#include "function.h"

int is_invalid(char c)
{
    char *valid_char = "# XPO\n";
    int fault = 0;

    for (int i = 0; valid_char[i] != '\0'; i++)
        if (c != valid_char[i])
            fault++;
    if (fault != 6)
        return (0);
    return (1);
}

int invalid_map(char *map_path)
{
    struct stat file;
    int fd = open(map_path, O_RDONLY);
    char *buffer;

    stat(map_path, &file);
    buffer = malloc(sizeof(char *) * file.st_size);
    read(fd, buffer, file.st_size);
    close(fd);
    for (int i = 0; buffer[i] != '\0'; i++)
        if (is_invalid(buffer[i])) {
            free(buffer);
            my_putstr("Your map is invalid.\n");
            my_putstr("It only can contain X, O, P, #, , \\n\n");
            return (1);
        }
    free(buffer);
    return (0);
}