/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 01:32:36 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/05 17:10:50 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		contains(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int		get_word_len(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != 0 && !contains(str[i], charset))
	{
		i++;
	}
	return (i);
}

static int		get_word_count(char *str, char *charset)
{
	int word_len;
	int n;
	int i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		word_len = get_word_len(str, charset);
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

static char		*try_create_word(char *str, char *charset, int *word_len)
{
	char	*result;

	*word_len = get_word_len(str, charset);
	if (*word_len > 0)
	{
		result = malloc(*word_len + 1);
		ft_strncpy(result, str, *word_len);
		*(result + (*word_len)) = '\0';
		str += (*word_len);
		return (result);
	}
	return (NULL);
}

char			**ft_strsplit(char *str, char *charset)
{
	int		i;
	int		word_count;
	int		word_len;
	char	**result;

	word_count = get_word_count(str, charset);
	result = malloc(sizeof(char*) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		result[i] = try_create_word(str, charset, &word_len);
		if (result[i] == NULL)
		{
			str += word_len;
			i++;
		}
		else
		{
			str += 1;
		}
	}
	result[i] = 0;
	return (result);
}
