##
## EPITECH PROJECT, 2024
## B-CPE-200-MAR-2-1-amazed-samy.chakrouni
## File description:
## Makefile
##

NAME	=	amazed

SRC 	=	$(wildcard amazed_func/*.c)
SRC += $(wildcard func/*.c)

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f amazed_func/*#
		rm -f include/*#
		rm -f *~
		rm -f amazed_func/*~
		rm -f include/*~

re	:	fclean all
