# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snunez <snunez@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 16:50:27 by snunez            #+#    #+#              #
#    Updated: 2022/02/18 16:50:31 by snunez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c logic.c logic2.c

SRCS_TEST = ft_printf.c logic.c logic2.c main.c

OBJS = $(SRCS:.c=.o)

LIBFT = ./Libft/

NAME = libftprintf.a

$(NAME):	$(OBJS)
			make -C $(LIBFT)
			cp $(LIBFT)libft.a $(NAME)
			ar  rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)
		make -sC $(LIBFT) clean

fclean: clean
		rm -f $(NAME)
		make -sC $(LIBFT) fclean

re:	fclean all

test: 	$(NAME)
		$(CC) $(CFLAGS) $(SRCS_TEST) $(NAME)

rm_test: fclean
		rm -f ./a.out

.PHONY = all clean fclean re