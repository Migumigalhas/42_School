# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 11:54:19 by miggomes          #+#    #+#              #
#    Updated: 2026/04/27 16:16:42 by miggomes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile

NAME		= libft.a
FUNCTIONS	= ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
				ft_isdigit ft_isprint ft_itoa ft_lstadd_back ft_lstadd_front ft_lstclear \
				ft_lstdelone ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize ft_memchr \
				ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd \
				ft_putstr_fd ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat \
				ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim \
				ft_substr ft_tolower ft_toupper
				
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs
CC			= cc

SRCS		= $(addsuffix .c, $(FUNCTIONS))
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re