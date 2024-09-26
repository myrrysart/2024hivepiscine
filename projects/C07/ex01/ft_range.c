/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/20 12:26:31 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_fill_range(int *range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	range = malloc(size * sizeof (int));
	if (range == NULL)
		return (NULL);
	ft_fill_range(range, min, max);
	return (range);
}
