/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 00:46:28 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/12 16:15:53 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strncpy(result, (char*)(s + start), len);
	result[len + 1] = '\0';
	return (result);
}
