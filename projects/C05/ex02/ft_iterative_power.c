/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:04:29 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/19 11:20:34 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power > 0)
		nb *= base;
	return (nb);
}

int main(int argc, char **argv)
{
	int	nb;
	int	power;

	if (!(argc == 3))
		return (1);
	nb = ft_atoi(argv[1]);
	power = ft_atoi(argv[2]);
	ft_putnbr(ft_iterative_power(nb, power));
	return (0);
}
