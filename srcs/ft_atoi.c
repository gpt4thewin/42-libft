/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:20:31 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 23:53:48 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\v' || c == '\n');
}

int			ft_atoi(char *str)
{
	int digit;
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while (isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && is_digit(str[i]))
	{
		result *= 10;
		digit = str[i] - '0';
		result += digit;
		i++;
	}
	return (sign * result);
}
