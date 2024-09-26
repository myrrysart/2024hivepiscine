/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:36:52 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/23 09:39:32 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	main (void)
{
	int	index[] = {1, 2, 3, 4, 5};
	int	size = sizeof(index) / sizeof(int);
	int	i = 0;
	while(i < size)
		printf("%d ", index[i++]);
}
