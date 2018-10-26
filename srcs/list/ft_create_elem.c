/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:45:22 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *result;

	result = malloc(sizeof(t_list));
	result->data = data;
	result->next = NULL;
	return (result);
}
