/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:18:16 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 17:20:35 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_init_grid(int grid[4][4])
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int	main (int argc,char **argv)
{
	int	hints[16];
	int	grid[4][4];
	
	ft_init_grid(grid);
	if (argc != 2)
	{
		ft_putstr("Error in input\n");
		return (0);
	}
	if(!(ft_parse_param(argv[1], hints)))
	{
		ft_putstr("Error in parsing\n");
		return  (0);
	}
	if(!(ft_solve_puzzle(hints, grid, 0)))
	{
		ft_putstr("Error in solver\n");
		return  (0);
	}
	ft_putstr("It worked! :D\n");
	printf("%d %d %d %d\n", grid[0][0], grid[0][1], grid[0][2], grid[0][3]);
	printf("%d %d %d %d\n", grid[1][0], grid[1][1], grid[1][2], grid[1][3]);
	printf("%d %d %d %d\n", grid[2][0], grid[2][1], grid[2][2], grid[2][3]);
	printf("%d %d %d %d\n", grid[3][0], grid[3][1], grid[3][2], grid[3][3]);
	
	return (0);
}

