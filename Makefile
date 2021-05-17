# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 09:18:54 by nleempoe          #+#    #+#              #
#    Updated: 2021/05/17 14:20:01 by nleempoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_strlen.c \
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
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_bzero.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strnstr.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strmapi.c \
	  ft_strncpy.c \
	  ft_strndup.c \
	  ft_split.c


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
