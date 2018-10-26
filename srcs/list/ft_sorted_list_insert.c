/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:08:18 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *previous;
	t_list *current;
	t_list *elem;

	elem = ft_create_elem(data);
	previous = 0;
	current = *begin_list;
	while (current && cmp(data, current->data) > 0)
	{
		previous = current;
		current = current->next;
	}
	if (previous == 0)
		*begin_list = elem;
	else
		previous->next = elem;
	elem->next = current;
	return ;
}
