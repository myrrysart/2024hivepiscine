/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:13:29 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/16 12:35:21 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_min(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	num[12];
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (ft_check_min(nb))
		return ;
	if (nb < 0)
	{
		sign = sign * -1;
		nb = nb * -1;
	}
	while (nb > 9)
	{
		num[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	num[i] = nb % 10 + '0';
	if (sign == -1)
		write(1, "-", 1);
	while (i >= 0)
		write(1, &num[i--], 1);
}
