# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clviolet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/26 11:00:48 by clviolet          #+#    #+#              #
#    Updated: 2026/09/27 21:13:03 by clviolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = cc -Werror -Wextra -Wall

MY_SOURCES = main.c \
	     creadictoff.c \
	     dictcreation.c \
	     utilities.c \
	     convert_number.c \
	     ft_pkg_utils.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

HEADERS = ft_dico.h \
	  ft_pkg_utils.h \
	  ft_str_utils.h \

CUR_DIR = $(shell pwd)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(CC) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) -o $@ -c $<

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)	

re: fclean all

.PHONY: all clean fclean re
