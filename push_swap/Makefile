##
## EPITECH PROJECT, 2020
## printf
## File description:
## ok
##

CC		= gcc

RM		= rm -f

# CFLAGS		= -g

NAME		=	push_swap

LIBPATH		= ./lib/my/

SRCPATH 		= ./src/

TEST_CRITERION		= --coverage -lcriterion

TEST_SRC		= ./test/*.c

SRC		=	$(LIBPATH)my_getnbr.c	\
			$(LIBPATH)my_putstr.c	\
			$(LIBPATH)my_putchar.c	\
			$(SRCPATH)func.c \
			$(SRCPATH)operation.c \
			$(SRCPATH)sort.c \
			$(SRCPATH)push_swap.c

OBJS		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME) *.gcno *.gcda tests_criterion
		rm -f $(NAME)

re:		fclean all

unit_tests: fclean all
		$(CC) -o tests_criterion $(SRC) $(TEST_SRC) $(TEST_CRITERION)

run_tests : $(NAME) $(OBJS)
	./tests_criterion

.PHONY:		all clean fclean re