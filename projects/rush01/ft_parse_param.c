/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:54:39 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 20:48:18 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_parse_param(char *str, int *hints)
{
	int	i;
	int	j;
	int	space_flag;

	i = 0;
	j = 0;
	space_flag = 2;
	if (!(*str))
		return (0);
	while (str[i])
	{
		if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
			return (0);
		else if(str[i] != ' ' && space_flag == 2)
		{
			hints[j] = str[i] - 48;
			j++;
			space_flag = 1;
		}
		else if(str[i] != ' ' && space_flag == 1)
			return (0);
		else if(str[i] == ' ' && space_flag == 2)
			return (0);
		else
			space_flag = 2;
		i++;
	}
	if (j > 16 || j < 16)
	{
		return(0);
	}
	return (1);
}
