/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 00:35:49 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/17 00:35:49 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	int	*result;
	int len;

	len = ft_strlen(s) + 1;
	result = malloc(len + 1);
	i = 0;
	while (i < len)
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}
