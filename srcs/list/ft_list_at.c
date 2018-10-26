/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:32:20 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:40 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*current;
	unsigned int		i;

	current = begin_list;
	i = 0;
	while (i < nbr)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	return (current);
}
