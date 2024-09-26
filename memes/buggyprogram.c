/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buggyprogram.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:26:25 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/13 10:39:11 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\n')
	{
		write (1, &str[index], 1);
		index++;
	}
}

int	main(void)
{
	char	*string1 = "test string with visually hard to see edgecase\n";
	char	*string2 = " (\\n should have happened) and visually more obvious \n <-- (this)";
	ft_putstr(string1);
	ft_putstr(string2);
	return (0);
}
