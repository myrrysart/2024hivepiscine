/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:36:15 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/19 11:20:24 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	while (--nb)
		result *= nb;
	return (result);
}

int main(int argc, char **argv)
{
	int	nb;

	if (!(argc == 2))
		return (1);
	nb = ft_atoi(argv[1]);
	ft_putnbr(ft_iterative_factorial(nb));
	return (0);
}
