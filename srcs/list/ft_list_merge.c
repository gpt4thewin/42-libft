/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:07:18 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

void			ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *last;

	if (begin_list1 == 0 || begin_list2 == 0)
	{
		return ;
	}
	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
	}
	else
	{
		last = ft_list_last(*begin_list1);
		last->next = begin_list2;
	}
}
