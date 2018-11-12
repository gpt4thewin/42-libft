/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:25:24 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/12 19:17:46 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		sorted;
	t_list	*previous;
	t_list	*current;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		previous = 0;
		current = (*begin_list);
		while (current && current->next)
		{
			if ((*cmp)(current->data, current->next->data) > 0)
			{
				ft_list_swap(begin_list, previous, current);
				sorted = 0;
			}
			previous = current;
			current = current->next;
		}
	}
}
