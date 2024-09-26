/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:00:24 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/24 14:04:47 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "jlib.c"

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while(argv[k])
	{
		while(argv[k][i])
			ft_putstr(argv[k][i++]);
		ft_putstr("\n");
		k++;
	}
	ft_strdup()
}
