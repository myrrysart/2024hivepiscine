/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:26:38 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/19 11:20:27 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	result *= ft_recursive_factorial(result - 1);
	return (result);
}

int main(int argc, char **argv)
{
	int	nb;

	if (!(argc == 2))
		return (1);
	nb = ft_atoi(argv[1]);
	ft_putnbr(ft_recursive_factorial(nb));
	return (0);
}
