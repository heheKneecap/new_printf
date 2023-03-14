NAME = libftprintf.a

SRC = 

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

ARSR = ar -sr

REMOVE = rm -f

all : $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(SRC)
	$(ARSR) $(NAME) $(OBJ)

clean: 
	$(REMOVE) $(OBJ)

fclean: 
	$(REMOVE) $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean all re