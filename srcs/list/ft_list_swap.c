/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 01:00:55 by marvin            #+#    #+#             */
/*   Updated: 2018/11/12 19:17:46 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_list_swap(t_list **begin_list, t_list *previous, t_list *current)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;

	a = previous;
	b = current;
	c = current->next;
	if (current->next)
		d = current->next->next;
	else
		d = 0;
	if (previous == 0)
		*begin_list = c;
	else
		a->next = c;
	c->next = b;
	b->next = d;
}
