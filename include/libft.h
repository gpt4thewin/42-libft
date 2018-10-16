/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 23:18:06 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 23:18:06 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
   void *content;
   size_t content_size;
   struct s_list *next;
} t_list;

void			*ft_memset(void *ptr, int value, size_t num);
void			*ft_memcpy(void *dst, const void *src, size_t num);
void			ft_bzero(void *s, int n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t num);
void			*ft_memchr(void *ptr, int value, size_t num);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

int				ft_strlen(char *str);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *str, int character);
char			*ft_strrchr(const char *str, int character);

int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);