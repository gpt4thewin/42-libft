/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:29:07 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 18:29:07 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memalloc(size_t size)
{
	void *ptr;

	ptr = malloc(ptr);
	if (ptr != NULL)
		ft_strclr(ptr);
	return (NULL);
}