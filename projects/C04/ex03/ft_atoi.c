/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:37:44 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/16 12:52:37 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_parse(char *str, int i, int *nb)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		*nb = *nb * 10 + str[i] - '0';
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
		ft_parse(str, i, &nb);
		if (nb == -2147483648)
			return (nb);
		return (nb * sign);
	}
	return (0);
}
