/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:09:53 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/20 12:26:34 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (strs[j][i])
		{
			i++;
			len++;
		}
		i = 0;
		j++;
		while (sep[i])
		{
			i++;
			len++;
		}
		i = 0;
	}
	return (len);
}

void	fill_str(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		while (strs[j][i])
			str[k++] = strs[j][i++];
		i = 0;
		j++;
		if (j < size)
		{
			while (sep[i])
				str[k++] = sep[i++];
			i = 0;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	len = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	len = ft_getlen(size, strs, sep);
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	fill_str(size, strs, sep, str);
	str[len] = '\0';
	return (str);
}
