/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 08:57:08 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/22 08:57:30 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	test_print_struct(t_number_chunk **result, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putstr("\nvalue: ");
		ft_putnbr((*result)[i].value);
		ft_putstr("\nzeroes: ");
		ft_putnbr((*result)[i].zeroes);
		ft_putstr("\n i++;\n");
		i++;
	}
}
