/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:08:20 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/05 17:08:30 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t		i;
	char		*found;

	found = NULL;
	i = 0;
	while (((char*)str)[i] != '\0')
	{
		if (((unsigned char*)str)[i] == (unsigned char)character)
			found = (char*)(str + i);
		i++;
	}
	return (found);
}
