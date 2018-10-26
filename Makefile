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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 10:58:06 by juazouz           #+#    #+#              #
#    Updated: 2018/08/19 23:11:02 by juazouz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	srcs/ft_atoi.c \
		srcs/ft_bzero.c \
		srcs/ft_isalnum.c \
		srcs/ft_isalpha.c \
		srcs/ft_isascii.c \
		srcs/ft_isdigit.c \
		srcs/ft_islower.c \
		srcs/ft_isprint.c \
		srcs/ft_isupper.c \
		srcs/ft_itoa.c \
		srcs/ft_memalloc.c \
		srcs/ft_memccpy.c \
		srcs/ft_memchr.c \
		srcs/ft_memcmp.c \
		srcs/ft_memcpy.c \
		srcs/ft_memdel.c \
		srcs/ft_memmove.c \
		srcs/ft_memset.c \
		srcs/ft_putchar.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putendl.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putnbr.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_putstr.c \
		srcs/ft_strcat.c \
		srcs/ft_strchr.c \
		srcs/ft_strclr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strcpy.c \
		srcs/ft_strdel.c \
		srcs/ft_strdup.c \
		srcs/ft_strequ.c \
		srcs/ft_striter.c \
		srcs/ft_striteri.c \
		srcs/ft_strjoin.c \
		srcs/ft_strlcat.c \
		srcs/ft_strlen.c \
		srcs/ft_strmap.c \
		srcs/ft_strmapi.c \
		srcs/ft_strncat.c \
		srcs/ft_strncmp.c \
		srcs/ft_strncpy.c \
		srcs/ft_strnequ.c \
		srcs/ft_strnew.c \
		srcs/ft_strnstr.c \
		srcs/ft_strrchr.c \
		srcs/ft_strsplit.c \
		srcs/ft_strstr.c \
		srcs/ft_strsub.c \
		srcs/ft_strtrim.c \
		srcs/ft_tolower.c \
		srcs/ft_toupper.c \
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

TARGET = libft.a

$(TARGET):
	gcc -Wall -Werror -Wextra -I includes -c $(SRC)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

all: $(TARGET)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all
