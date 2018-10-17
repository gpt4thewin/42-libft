/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 01:10:14 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/17 01:10:14 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isblank(int c)
{
	return (c == '\n' || c == ' ' || c == '\t');
}

static int	ntoskip(char *s)
{
	int		n;

	n = 0;
	while (isblank(*s))
		n++;
	return (n);
}

static int	trimlen(char *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	i += ntoskip(s);
	while ((*s) + i && !isblank((*s) + i))
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*result;

	len = trimlen(s);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	i += ntoskip(s);
	ft_strncpy(result, s + i, len);

	return (result);
}