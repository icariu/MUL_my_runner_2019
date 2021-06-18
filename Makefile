##
## EPITECH PROJECT, 2019
## MUL_my_runner_2019
## File description:
## Makefile
##

SRC		=	src/main.c		\
			src/draw_back.c	\
			src/runner.c	\
			src/init_val.c	\
			src/usage.c		\
			src/event.c		\
			src/destroy.c	\
			src/sound.c		\
			src/score.c		\
			src/map.c		\
			src/obstacle.c	\
			src/move_mob.c	\
			src/end_game.c

NAME	=	my_runner

COMPIL	=	-Llib/my -lmy -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

TFLAG	=	./tests/test_my_runner.c -lcriterion --coverage -fprofile-arcs

CFLAGS	=	-I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(SRC) $(COMPIL) $(CFLAGS) -g

clean:
		rm -f $(OBJ)
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

tests_run:
		make -C ./lib/my re
		gcc -o $(NAME) $(SRC) $(TFLAG) $(COMPIL) $(CFLAGS)
		-./$(NAME)
		gcovr --exclude tests/
		rm -f *.gcno
		rm -f *.gcda