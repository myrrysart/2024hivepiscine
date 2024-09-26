/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:16:34 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/13 22:38:49 by Jyniemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	len = 0;
	i = 0;
	j = 0;
	while (src[len])
		len++;
	len++;
	while (dest[i])
	{
		len++;
		i++;
	}
	while (i + j < size && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len);
}
