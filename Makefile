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
		srcs/string/ft_strtok.c \
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

OBJ =	ft_atoi.o \
		ft_bzero.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_islower.o \
		ft_isprint.o \
		ft_isupper.o \
		ft_isspace.o \
		ft_itoa.o \
 		ft_memalloc.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memdel.o \
		ft_memmove.o \
		ft_memset.o \
		ft_putchar.o \
		ft_putchar_fd.o \
		ft_putendl.o \
		ft_putendl_fd.o \
		ft_putnbr.o \
		ft_putnbr_fd.o \
		ft_putstr.o \
		ft_putstr_fd.o \
		ft_strcat.o \
		ft_strchr.o \
		ft_strclr.o \
		ft_strcmp.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strdup.o \
		ft_strequ.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlen.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strncat.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strnstr.o \
		ft_strrchr.o \
		ft_strsplit.o \
		ft_strstr.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_tolower.o \
		ft_toupper.o \
		ft_strtok.o \
		ft_create_elem.o \
		ft_list_at.o \
		ft_list_clear.o \
		ft_list_find.o \
		ft_list_foreach.o \
		ft_list_foreach_if.o \
		ft_list_last.o \
		ft_list_merge.o \
		ft_list_push_back.o \
		ft_list_push_front.o \
		ft_list_remove_if.o \
		ft_list_reverse.o \
		ft_list_size.o \
		ft_list_sort.o \
		ft_list_swap.o \
		ft_sorted_list_insert.o \
		ft_sorted_list_merge.o


$(TARGET):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

all: $(TARGET)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all
