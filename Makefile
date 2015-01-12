CC =    gcc
NAME =  cat
SRC =	*.c
FLAGS = -W -Wall -Werror
OBJ =   $(SRC:%.c=%.o)
RM =    rm -f

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

all:    $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all