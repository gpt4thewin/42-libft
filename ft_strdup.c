/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:43:25 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/08 16:01:40 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = ft_strlen(src);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, src);
	return (result);
}
