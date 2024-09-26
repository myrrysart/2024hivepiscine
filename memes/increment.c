/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   increment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:15:45 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/11 09:43:40 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		/* uncomment the correct one of these four */
		//len++;
		//len += 1;
		//len = len + 1;
		//len -= -1;
	}
	write(1, str, len);
}
