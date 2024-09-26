/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:27:04 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/10 09:46:08 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	sorted;

	sorted = 0;
	i = 0;
	swap = *tab;
	while (sorted == 0)
	{
		sorted = 1;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				sorted = 0;
			}
			i++;
		}
		i = 0;
	}
}
