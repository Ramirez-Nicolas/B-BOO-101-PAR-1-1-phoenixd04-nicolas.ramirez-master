##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile .
##

SRCS    =       my_putchar.c	\
		show_number.c	\
		show_string.c	\
		reverse_string.c	\
		to_number.c	\
		is_prime_number.c	\
		my_strcpy.c	\
		my_strncmp.c	\
		my_strstr.c	\

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
