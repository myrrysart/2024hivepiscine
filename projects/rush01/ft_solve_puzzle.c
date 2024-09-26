/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:59:07 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/15 20:17:47 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

int	ft_checktop(int hints[16], int grid[4][4], int col)
{
	int	visible_count;
	int	max_height;
	int	hint;
	int	row;
	int	filled_cells;

	visible_count = 0;
	max_height = 0;
	hint = hints[col];
	row = 0;
	filled_cells = 0;
	while (row < 4)
	{
		if (grid[row][col] != 0)
		{
			filled_cells++;
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		row ++;
	}
	if (filled_cells == 4)
	{
		printf("col %d filled! \n", col);
		return (visible_count == hint);
	}
	printf("col %d not filled yet \n", col);
	return (visible_count <= hint);
}

int	ft_checkbottom(int hints[16], int grid[4][4], int col)
{
	int	visible_count;
	int	max_height;
	int	hint;
	int	row ;
	int	filled_cells;

	visible_count = 0;
	max_height = 0;
	hint = hints[col + 4];
	row = 3;
	filled_cells = 0;
	while (row >= 0)
	{
		if (grid[row][col] != 0)
		{
			filled_cells++;
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		row--;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}

int	ft_checkleft(int hints[16], int grid[4][4], int row)
{
	int	visible_count;
	int	max_height;
	int	hint;
	int	col;
	int	filled_cells;

	visible_count = 0;
	max_height = 0;
	hint = hints[row + 8];
	col = 0;
	filled_cells = 0;
	while (col < 4)
	{
		if (grid[row][col] != 0)
		{
			filled_cells++;
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		col++;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}

int	ft_checkright(int hints[16], int grid[4][4], int row)
{
	int	visible_count;
	int	max_height;
	int	hint;
	int	col;
	int	filled_cells;

	visible_count = 0;
	max_height = 0;
	hint = hints[row + 12];
	col = 3;
	filled_cells = 0;
	while (col >= 0)
	{
		if (grid[row][col] != 0)
		{
			filled_cells++;
			if (grid[row][col] > max_height)
			{
				visible_count++;
				max_height = grid[row][col];
			}
		}
		col--;
	}
	if (filled_cells == 4)
		return (visible_count == hint);
	return (visible_count <= hint);
}

int	ft_checkcol(int grid[4][4], int col, int num)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkrow(int grid[4][4], int row, int num)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}
int	ft_col_is_full(int grid[4][4], int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if(!(grid[i][col]))
			return(0);
		i++;
	}
	return (1);
}
int	ft_row_is_full(int grid[4][4], int row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if(!(grid[row][i]))
			return(0);
		i++;
	}
	return (1);
}
int	ft_checkhints(int hints[16], int grid[4][4], int pos, int num)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	grid[row][col] = num;
	if (ft_row_is_full(grid, row))
	{
		if (!((ft_checkleft(hints, grid, row)) && (ft_checkright(hints, grid, row))))
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	if (ft_col_is_full(grid, col))
	{
		if (!(ft_checktop(hints, grid, col) && (ft_checkbottom(hints, grid, col))))
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	grid[row][col] = 0;
	return (1);
}

int	ft_is_safe(int hints[16], int grid[4][4], int pos, int num)
{
	int	col;
	int	row;

	col = pos % 4;
	row = pos / 4;
	if (!(ft_checkcol(grid, col, num) && ft_checkrow(grid, row, num)))
		return(0);
	if (ft_checkhints(hints, grid, pos, num))
		return (1);
	return(0);
}

int	ft_solve_puzzle(int hints[16], int grid[4][4], int pos)
{
	int	num;
	int	col;
	int	row;

	num = 1;
	col = pos % 4;
	row = pos / 4;
	printf("%d position \n", pos);
	if (pos == 16)
		return (1);
	while (num <= 4)
	{
		if (ft_is_safe(hints, grid, pos, num))
		{
			grid[row][col] = num;
			printf("Trying if %d in row %d col %d\n", num, row, col);
			if (ft_solve_puzzle(hints, grid, pos + 1))
				return (1);
			grid[row][col] = 0;
			printf("collapsing...\n");
		}
		num++;
	}
	return (0);
}
