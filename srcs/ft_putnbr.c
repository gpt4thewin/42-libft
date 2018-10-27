/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 17:37:54 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/17 17:37:54 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	tmp;

	if (nb < 0)
	{
		tmp = (unsigned int)-nb;
		ft_putchar('-');
	}
	else
	{
		tmp = (unsigned int)nb;
	}
	if (tmp >= 10)
	{
		ft_putnbr((int)(tmp / 10));
	}
	ft_putchar(tmp % 10 + '0');
}
