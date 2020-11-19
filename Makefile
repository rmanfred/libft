#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2020/05/05 23:45:50 by rmanfred          #+#    #+#             *#
#*   Updated: 2020/05/19 17:15:02 by rmanfred         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h

INPUT = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	
OBJ = $(INPUT:.c=.o)

IN_BON = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	 ft_lstiter.c ft_lstmap.c

B_OBJ = $(IN_BON:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:  $(B_OBJ)
	@ar rc $(NAME) $(B_OBJ)
	@ranlib $(NAME)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@/bin/rm -f $(OBJ) $(B_OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
