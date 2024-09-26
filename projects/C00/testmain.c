/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:59:57 by jyniemit          #+#    #+#             */
/*   Updated: 2024/09/09 18:17:21 by jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"

int	main(void)
{
	char i;

	i = 'z';
	ft_putchar(i);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_alphabet();
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_numbers();
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_is_negative(10);
	ft_is_negative(-10);
	ft_is_negative(0);
	return (0);
}
