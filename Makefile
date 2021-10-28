##
## EPITECH PROJECT, 2021
## epitech-criterion-actions
## File description:
## Makefile by Maxime Premont
##

SRC	=	./sources/main.c	\
		./sources/my_strlen.c

TESTSRC	=	./sources/my_strlen.c	\
			./tests/test_my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	count_words_characters

TESTNAME	=	unit_tests

CFLAGS	=	-I./includes -Wall -Wextra

TESTCFLAGS	=	-I./includes -Wall -Wextra -lcriterion --coverage

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f $(TESTOBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(TESTNAME)
	find -name "*.gcda" -delete -o -name "*.gcno" -delete

re:	fclean $(NAME)

tests_run:	$(TESTOBJ)
	gcc -o $(TESTNAME) $(TESTSRC) $(TESTCFLAGS)
	./$(TESTNAME)

.PHONY: all clean fclean re tests_run