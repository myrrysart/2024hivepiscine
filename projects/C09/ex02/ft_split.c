/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:33:36 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/26 19:33:42 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_not_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str && !in_word && ft_not_sep(*str, charset))
		{
			in_word = 1;
			count++;
		}
		else if (in_word)
			in_word = ft_not_sep(*str, charset);
		str++;
	}
	return (count);
}

char	*ft_save_word(char *str, char *charset, int *i)
{
	int		len;
	char	*word;

	len = 0;
	while (str[*i + len] && ft_not_sep(str[*i + len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (str[*i] && ft_not_sep(str[*i], charset))
		word[len++] = str[(*i)++];
	word[len] = '\0';
	return (word);
}

int	split_words(char **split, char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_not_sep(str[i], charset))
		{
			split[j] = ft_save_word(str, charset, &i);
			if (!split[j])
				return (0);
			j++;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		str_count;

	str_count = ft_count_words(str, charset);
	split = malloc(sizeof(char *) * (str_count + 1));
	if (!split)
		return (NULL);
	if (!split_words(split, str, charset))
		return (NULL);
	return (split);
}
