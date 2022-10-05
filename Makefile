NAME = ft_printf.a

SRC = ft_printf.c ft_printf.h main.c

FLAGS = -Wall -Werror -Wextra

C = cc

$(NAME):
	@$(C) $(FLAGS) $(SRC) -o pro && ./pro

all: $(NAME)

fclean:
	rm -rf *.o pro

clean:
	rm -rf pro
