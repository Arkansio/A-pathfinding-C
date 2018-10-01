CC = gcc
NAME = a.out
SRC = src/main.c \
			src/loader.c
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
INC = includes/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $< -o $@ -I $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all