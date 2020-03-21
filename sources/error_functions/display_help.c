/*
** EPITECH PROJECT, 2019
** display_help.c
** File description:
** display_help
*/

#include "function.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>

void display_help(void)
{
    struct stat help;
    int fd = open("ressources/-h", O_RDONLY);
    char *buffer;

    stat("ressources/-h", &help);
    buffer = malloc(sizeof(char *) * help.st_size);
    read(fd, buffer, help.st_size);
    write(1, buffer, help.st_size);
    close(fd);
    free(buffer);
}