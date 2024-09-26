/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buggyprogram2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:45:37 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/13 11:01:15 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  

int	func_many_Z_within_n_characters(char *str, int n)
{
	int	index;
	int	z_amount;

	index = 0;
	z_amount = 0;
	while (str[index] != '\n' && index < n)
	{
		if (str[index] == 'Z')
			z_amount++;
		index++;
	}
	return (z_amount);
}

int	main(void)
{
	char	*string = "Hello Z World! \n How many Z are there? \nZ";
	//printing the string and the number of Zs up to the second newline
	printf("%s %d", string, func_many_Z_within_n_characters(string, 40));
	return (0);
}
