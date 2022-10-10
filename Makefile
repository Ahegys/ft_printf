NAME = libftprintf.a

SRC = ft_printf.c ft_utilities.c args.c main.c

FLAGS = -Wall -Werror -Wextra -g

C = cc

$(NAME):
	@$(C) $(FLAGS) $(SRC) -o pro && ./pro

all: $(NAME)

fclean:
	rm -rf *.o pro

clean:
	rm -rf pro
