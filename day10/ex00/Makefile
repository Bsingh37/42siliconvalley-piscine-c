# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsingh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 11:21:46 by bsingh            #+#    #+#              #
#    Updated: 2018/07/03 10:58:03 by bsingh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_swap.c ./srcs/ft_strcmp.c

INCLUDE = include/

OBJECT = $(SRCS:.c=.o)

all: $(NAME)

    $(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDE)
	ar rc $(NAME) $(OBJECT)
	ran lib $(NAME)

clean:
	/bin/rm -f $(OBJECT)

flclean: clean
	/bin/rm -f $(NAME)

re:
	fclean all
