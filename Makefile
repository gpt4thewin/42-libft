# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/17 17:47:32 by juazouz           #+#    #+#              #
#    Updated: 2018/10/17 17:47:32 by juazouz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I $(IDIR)

NAME = libft.a

ODIR = obj
IDIR = includes
SDIR = srcs

_DEPS = libft.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ = $(patsubst $(SDIR)/%.c,$(ODIR)/%.o,$(SRC))

HEADERS = includes/libft.h

SRC =	srcs/string/ft_atoi.c \
		srcs/string/ft_isalnum.c \
		srcs/string/ft_isalpha.c \
		srcs/string/ft_isascii.c \
		srcs/string/ft_isdigit.c \
		srcs/string/ft_islower.c \
		srcs/string/ft_isprint.c \
		srcs/string/ft_isupper.c \
		srcs/string/ft_isspace.c \
		srcs/string/ft_itoa.c \
		srcs/string/ft_strcat.c \
		srcs/string/ft_strchr.c \
		srcs/string/ft_strclr.c \
		srcs/string/ft_strcmp.c \
		srcs/string/ft_strcpy.c \
		srcs/string/ft_strdel.c \
		srcs/string/ft_strdup.c \
		srcs/string/ft_strequ.c \
		srcs/string/ft_striter.c \
		srcs/string/ft_striteri.c \
		srcs/string/ft_strjoin.c \
		srcs/string/ft_strlcat.c \
		srcs/string/ft_strlen.c \
		srcs/string/ft_strmap.c \
		srcs/string/ft_strmapi.c \
		srcs/string/ft_strncat.c \
		srcs/string/ft_strncmp.c \
		srcs/string/ft_strncpy.c \
		srcs/string/ft_strnequ.c \
		srcs/string/ft_strnew.c \
		srcs/string/ft_strnstr.c \
		srcs/string/ft_strrchr.c \
		srcs/string/ft_strsplit.c \
		srcs/string/ft_strstr.c \
		srcs/string/ft_strsub.c \
		srcs/string/ft_strtrim.c \
		srcs/string/ft_tolower.c \
		srcs/string/ft_toupper.c \
		srcs/memory/ft_memalloc.c \
		srcs/memory/ft_memccpy.c \
		srcs/memory/ft_memchr.c \
		srcs/memory/ft_memcmp.c \
		srcs/memory/ft_memcpy.c \
		srcs/memory/ft_memdel.c \
		srcs/memory/ft_memmove.c \
		srcs/memory/ft_memset.c \
		srcs/memory/ft_bzero.c \
		srcs/output/ft_putchar.c \
		srcs/output/ft_putchar_fd.c \
		srcs/output/ft_putendl.c \
		srcs/output/ft_putendl_fd.c \
		srcs/output/ft_putnbr.c \
		srcs/output/ft_putnbr_fd.c \
		srcs/output/ft_putstr.c \
		srcs/output/ft_putstr_fd.c \
		srcs/list/ft_lstadd.c \
		srcs/list/ft_lstdel.c \
		srcs/list/ft_lstdelone.c \
		srcs/list/ft_lstiter.c \
		srcs/list/ft_lstmap.c \
		srcs/list/ft_lstnew.c

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

$(ODIR)/%.o: srcs/%.c $(DEPS)
	@mkdir -p $(dir $@)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
