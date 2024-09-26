/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:53:24 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/09 11:55:57 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	character;

	character = '0';
	while (character <= '9')
	{
		write(1, &character, 1);
		character++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
