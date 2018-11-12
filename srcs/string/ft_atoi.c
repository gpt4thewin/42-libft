/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:20:31 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/12 15:59:40 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	get_sign(char *str, int *i)
{
	if (str[(*i)] == '-')
	{
		(*i)++;
		return (-1);
	}
	if (str[(*i)] == '+')
	{
		(*i)++;
	}
	return (1);
}

int			ft_atoi(char *str)
{
	int		digit;
	long	result;
	int		i;
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	sign = get_sign(str, &i);
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		result *= 10;
		digit = str[i] - '0';
		result += digit;
		if (result < 0)
			return (-1);
		i++;
	}
	return (sign * result);
}
