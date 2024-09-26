/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:24:31 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/10 21:05:13 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			result = 0;
		str++;
	}
	return (result);
}
