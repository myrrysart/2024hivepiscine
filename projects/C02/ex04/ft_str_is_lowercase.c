/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:29:35 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/10 20:14:36 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			result = 0;
		str++;
	}
	return (result);
}
