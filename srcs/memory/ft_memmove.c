/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:13:25 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/05 17:12:30 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	void *buf;

	buf = malloc(num);
	ft_memcpy(buf, src, num);
	ft_memcpy(dst, buf, num);
	free(buf);
	return (dst);
}
