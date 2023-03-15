NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_fd.c ft_strchr.c ft_do_hex.c \
		ft_do_pointer.c ft_do_unsigned.c ft_putchar_fd.c \
		ft_strchr.c ft_stuff.c ft_itoa.c

OBJ = $(SRC:.c=.o)

CC = cc

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
