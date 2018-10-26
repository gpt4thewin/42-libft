/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:54:04 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
							void (*f)(void*),
							void *data_ref,
							int (*cmp)(void*, void*))
{
	t_list *current;

	current = begin_list;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			(*f)(current->data);
		}
		current = current->next;
	}
}
