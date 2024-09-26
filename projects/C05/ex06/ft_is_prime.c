/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:38:10 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/20 08:50:02 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_force_prime(int nb, int divisor)
{
	if (nb % divisor == 0)
		return (0);
	if (divisor * divisor > nb)
		return (1);
	if (ft_force_prime(nb, divisor + 1))
		return (1);
	return (0);
}

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (ft_force_prime(nb, divisor))
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int	nb;

	if (!(argc == 2))
		return (1);
	nb = ft_atoi(argv[1]);
	ft_putnbr(ft_is_prime(nb));
	return (0);
}
