/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:00:48 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/11 10:46:01 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')
				|| (str[count] >= 'A' && str[count] <= 'Z')))
			return (0);
		count++;
	}
	return (1);
}
