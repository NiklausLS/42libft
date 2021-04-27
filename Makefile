# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 09:18:54 by nleempoe          #+#    #+#              #
#    Updated: 2021/04/27 04:24:03 by nleempoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = prog
SRC = main.c \
	  ft_strlen.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isprint.c \
	  ft_isascii.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strncmp.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_atoi.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_bzero.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_substr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $<

$(NAME) : $(OBJ)
	$(CC) -o $@ $^

clean :
	rm -vrf *.o

fclean : clean
	rm -vf $(NAME)

re : fclean all
