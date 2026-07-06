# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/23 12:16:28 by miggomes          #+#    #+#              #
#    Updated: 2026/07/06 12:31:10 by miggomes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile

NAME		= push_swap
FUNCTIONS	= 1_Operations/1_s.c \
       1_Operations/2_p.c \
       1_Operations/3_r.c \
       1_Operations/4_rr.c \
       1_Operations/Helper_operations.c \
       2_Algorythms/1_Manual_sort.c \
       2_Algorythms/2_Selection_sort.c \
       2_Algorythms/3_Chunk_sort.c \
       2_Algorythms/4_Radix.c \
       2_Algorythms/Helper_algorythms_1.c \
       2_Algorythms/Helper_algorythms_2.c \
       2_Algorythms/Helper_algorythms_3.c \
       3_Selective_functions/ft_disorder_measure.c \
       3_Selective_functions/ft_flag_parsing.c \
       3_Selective_functions/ft_free_memmory.c \
       3_Selective_functions/ft_pick_algorythm.c \
	   4_Main/ft_push_swap.c \
       4_Main/Helper_main_1.c \
       4_Main/Helper_main_2.c

CFLAGS		= -Wall -Wextra -Werror -I.
RM			= rm -f
CC			= cc

SRCS		= $(FUNCTIONS)
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re