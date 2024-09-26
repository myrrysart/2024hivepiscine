/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:43:13 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/10 11:13:37 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	left;
	int	right;

	swap = 0;
	left = 0;
	right = size - 1;
	while (left < right)
	{
		swap = tab[left];
		tab[left] = tab[right];
		tab[right] = swap;
		left++;
		right--;
	}
}
