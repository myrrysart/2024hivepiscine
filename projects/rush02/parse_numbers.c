/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:47:34 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/21 12:48:17 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_numbers(char *str , t_number_chunk **result)
{
	int	len;
	int	i;
	int	j;
	int	zeroes;
	size_t	memsize;

	len = 0;
	i = 0;
	j = 0;
	zeroes = 0;
	memsize = 0;
	while (str[len])
		len++;
	memsize = sizeof(t_number_chunk) * (len + 1);
	*result = malloc(memsize);
	if (*result == NULL)
	{
		ft_puterror("parse_numbers error: failed to malloc result.");//FIX
		return(0);
	}
	if (!*str)
	{
		ft_puterror("parse_numbers error: empty string.");//FIX
		return (0);
	}
	i = len - 1;
	while (i >= 0)
	{
		(*result)[i].value = str[i] - '0';
		(*result)[i].zeroes = j;
		i--;
		j++;
	}
	ft_puterror("parse_numbers: t_number_chunks filled.");//FIX
	return (len);
}
