/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:37:03 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/14 10:16:59 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//
//int	main(void)
//{
//	int	i;
//	char	*str = "testng! Agan.";
//	int	flag;
//
//	i = 0;
//	flag = 0;
//	while(str[i])
//	{
//		if(str[i] == 'i')
//		{
//			flag = 1;
//			write(1, "*\n", 2);
//		}
//		i++;
//	}
//	if (flag == 0)
//		write(1, "@\n", 2);
//	return (0);
//}

int	main(void)
{
	write(1, "q\0\0\0ello\n", 9);
	write(1, "q\n", 2);
}
