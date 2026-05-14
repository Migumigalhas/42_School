# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/11 14:59:21 by miggomes          #+#    #+#              #
#    Updated: 2026/05/14 12:54:31 by miggomes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile

NAME		= libftprintf.a
FUNCTIONS	= ft_printf ft_putchar ft_putstr ft_putnbr \
				ft_putunsigned ft_puthex ft_putptr

CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs
CC			= cc

SRCS		= $(addsuffix .c, $(FUNCTIONS))
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c libftprintf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re