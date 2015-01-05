##
## Makefile for Makefile in /home/moisse_r/florico
##
## Made by Raphael Moisset
## Login   <moisse_r@epitech.net>
##
## Started on  Mon Dec 22 21:54:20 2014 Raphael Moisset
## Last update Mon Jan  5 15:16:49 2015 Raphael Moisset
##

CC	=	gcc -o

RM	=	rm -rf

CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-I./

NAME	=	my_select

SRC	=	main.c \
		my_putchar.c \
		my_put_nbr.c \
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) $(NAME) $(OBJ) -lncurses

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
