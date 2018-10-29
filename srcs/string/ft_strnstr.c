/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 23:30:23 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 23:30:23 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	little_len;

	little_len = ft_strlen((char*)little);
	if (little_len == 0)
	{
		return ((char*)big);
	}
	while (*big)
	{
		if (!ft_strncmp((char*)big, (char*)little, len))
		{
			return ((char*)big);
		}
		big++;
	}
	return (0);
}
