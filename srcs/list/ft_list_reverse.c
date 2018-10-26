/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:47:28 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*previous;
	t_list	*next;

	current = *begin_list;
	previous = 0;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}
