NAME = 	libftprintf.a

SRC = printf.h

ARQO = $(ARQC:.c=.o)

COMP = -c -Werror -Wall -Wextra -I $(ARQH)

all: $(NAME)

$(NAME): $(ARQO)
	ar  rcs $(NAME) $(ARQO)

.c.o:
	$(CC) $(COMP) $< -o $(<:.c=.o)

clean:
	rm -f $(ARQO)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
