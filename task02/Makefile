##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile .
##

SRCS    =	concat_paramaters.c	\
		../lib/phoenix/show_string.c	\
		../lib/phoenix/my_putchar.c	\
		main.c	\

NAME    = libphoenix.a

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):        $(OBJS)
		ar rc $(NAME) $(SRCS) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(UT_NAME)

re: fclean all
