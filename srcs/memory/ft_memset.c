/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:38:06 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 18:38:06 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		((unsigned char*)ptr)[i] = (unsigned char)value;
		i++;
	}

	return (ptr);
}
