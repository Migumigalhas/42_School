# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/23 12:16:28 by miggomes          #+#    #+#              #
#    Updated: 2026/06/23 12:17:28 by miggomes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile

NAME		= push_swap.a
FUNCTIONS	= push_swap \

CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs
CC			= cc

SRCS		= $(addsuffix .c, $(FUNCTIONS))
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c push_swap.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re