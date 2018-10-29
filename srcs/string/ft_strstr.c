/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:39:45 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 23:19:44 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int len;

	len = ft_strlen(to_find);
	if (len == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (!ft_strncmp(str, to_find, len))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
