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

FLAGS = -Wall -Wextra -Werror -I includes

TARGET = libft.a

OBJ =	$(patsubst %.c,%.o,$(notdir $(SRC)))

MKDIR_P = mkdir -p

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
		srcs/list/ft_create_elem.c \
		srcs/list/ft_list_at.c \
		srcs/list/ft_list_clear.c \
		srcs/list/ft_list_find.c \
		srcs/list/ft_list_foreach.c \
		srcs/list/ft_list_foreach_if.c \
		srcs/list/ft_list_last.c \
		srcs/list/ft_list_merge.c \
		srcs/list/ft_list_push_back.c \
		srcs/list/ft_list_push_front.c \
		srcs/list/ft_list_remove_if.c \
		srcs/list/ft_list_reverse.c \
		srcs/list/ft_list_size.c \
		srcs/list/ft_list_sort.c \
		srcs/list/ft_list_swap.c \
		srcs/list/ft_sorted_list_insert.c \
		srcs/list/ft_sorted_list_merge.c

.PHONY: directories

$(TARGET): directories
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

all: $(TARGET)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all
