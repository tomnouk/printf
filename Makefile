# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 11:38:40 by anomourn          #+#    #+#              #
#    Updated: 2023/11/03 16:37:07 by anoukmourna      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_printf.a
CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_printf.c ft_putcharr.c ft_putnbrr.c\
	ft_putstrr.c ft_puthexa.c ft_putunsic.c

OBJS = $(SRCS:.c=.o)
INCLUDES=./includes

all: $(NAME)

$(NAME): $(OBJS)
	@$(NAME) -C libft.a
	@cp libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all