/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:47:48 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/12 20:26:40 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**curr;
	t_list	**next;

	curr = alst;
	while ((*curr) != NULL)
	{
		next = &(*curr)->next;
		ft_lstdelone(curr, del);
		*curr = NULL;
		curr = next;
	}
}
