/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:05:49 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/29 19:05:49 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_substring(char *str, char *delimiter)
{
	int i;

	i = 0;
	while (delimiter[i] != '\0')
	{
		if (str[i] == '\0' || str[i] != delimiter[i])
			return (0);
		i++;
	}
	return (1);
}

static int		get_word_len(char *str, char *delimiter)
{
	int i;

	i = 0;
	while (str[i] != 0 && !is_substring(&str[i], delimiter))
	{
		i++;
	}
	return (i);
}

static int		get_word_count(char *str, char *delimiter)
{
	int word_len;
	int n;
	int i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		word_len = get_word_len(str, delimiter);
		if (word_len > 0)
		{
			n++;
			i += word_len;
		}
		else
		{
			i++;
		}
	}
	return (i);
}

char	**ft_strtok(char *str, char *delimiter)
{
	int		i;
	int		word_count;
	int		word_len;
	char	**result;

	word_count = get_word_count(str, delimiter);
	result = malloc(sizeof(char*) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		word_len = get_word_len(str, delimiter);
		if (word_len > 0)
		{
			result[i] = malloc(word_len + 1);
			ft_strncpy(result[i], str, word_len);
			*(result[i] + word_len) = '\0';
			str += word_len;
			i++;
		}
		else
			str += 1;
	}
	result[i] = 0;
	return (result);
}
