/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:24:41 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/19 11:20:15 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../jlib.c"

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}

int main(int argc, char **argv)
{
	int	nb;

	if (!(argc == 2))
		return (1);
	nb = ft_atoi(argv[1]);
	ft_putnbr(ft_fibonacci(nb));
	return (0);
}
