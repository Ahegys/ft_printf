# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afelipe- <afelipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 12:19:15 by afelipe-          #+#    #+#              #
#    Updated: 2022/10/10 12:19:17 by afelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_utilities.c args.c 

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:%.c=%.o)

INCLUDE = ft_printf.h

C = cc

$(NAME):	$(OBJS) $(INCLUDE)
	ar -rcs $(NAME) $(OBJS)

%.o:	%.c
	$(CC) $(FLAGS) -g -c $< -o $@
all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all