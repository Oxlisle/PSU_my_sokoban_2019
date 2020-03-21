##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Compiling the project
##

SRC		=	sources/lib_functions/my_nstrlen.c\
			sources/lib_functions/my_putchar.c\
			sources/lib_functions/my_putnbr.c\
			sources/lib_functions/my_putstr.c\
			sources/lib_functions/my_strlen.c\
			sources/main_functions/main.c\
			sources/error_functions/main_error.c\
			sources/error_functions/display_help.c\
			sources/error_functions/map_error.c\
			sources/event_functions/event.c\
			sources/event_functions/move.c\
			sources/event_functions/end_game.c\
			sources/game_functions/sokoban.c\
			sources/map_functions/map_loader.c\
			sources/map_functions/drawing.c\
			sources/stat_functions/map_stat.c\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

LDFLAGS	=	-lncurses

CFLAGS	=	-Wall -Wshadow -Wextra -Iinclude/ -g

CC		=	gcc

all		:	$(NAME) clean

$(NAME)	:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re