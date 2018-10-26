/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:20:37 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int n;

	n = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		n++;
	}
	return (n);
}
