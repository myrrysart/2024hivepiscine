/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:20:04 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/20 08:32:56 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	while (square * square != nb && square * 2 < nb)
		square++;
	if (square * square == nb)
		return (square);
	return (0);
}

int main(int argc, char **argv)
{
	int	nb;

	if (!(argc == 2))
		return (1);
	nb = ft_atoi(argv[1]);
	ft_putnbr(ft_sqrt(nb));
	return (0);
}
