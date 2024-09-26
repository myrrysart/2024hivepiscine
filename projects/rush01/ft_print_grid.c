/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:05:32 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/15 19:52:34 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>

void	print_char(int *row)
{
	int	i;
	char	num;

	i = 0;
	while(i < 4)
	{
		num = row[i] + '0';
		write(1, &num, 1);
		i++;
	}
}
void	ft_print_grid(int grid[4][4])
{
    int i;
	
    i = 0;
    while (i < 4)
    {
        print_char(&grid[i][0]);
	write(1, "\n", 1);
        i++;
    }
}

//{
//	printf("%d %d %d %d\n", grid[0][0], grid[0][1], grid[0][2], grid[0][3]);
//	printf("%d %d %d %d\n", grid[1][0], grid[1][1], grid[1][2], grid[1][3]);
//	printf("%d %d %d %d\n", grid[2][0], grid[2][1], grid[2][2], grid[2][3]);
//	printf("%d %d %d %d\n", grid[3][0], grid[3][1], grid[3][2], grid[3][3]);
//}

//int i
//int j
//char dest[32]
//int n
//
//i = 0
//j = 0
//n = 0
//while (i < 4)
//{
//	j = 0
//	While (j < 4)
//	{
//		dest[n] = grid[i][j] + 48
//		n++;
//		dest[n] = ' '
//		n++;
//		j++;
//	}
//	i++;
//}
