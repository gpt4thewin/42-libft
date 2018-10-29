/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:29:07 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 18:29:07 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}

	return (dst);
}
