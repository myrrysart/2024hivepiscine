/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:00:53 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/11 19:24:17 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	capped;

	capped = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z' && capped == 0)
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			capped = 1;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			capped = 0;
		}
		i++;
	}
	return (str);
}
