/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:01:56 by juhyeonl          #+#    #+#             */
/*   Updated: 2024/09/22 22:20:32 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_str(char *file)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (file[i] != '\n')
		i++;
	str = (char *)malloc(i + 1);
	if (*str)
		return (0);
	i = 0;
	while (file[i] != ' ' && file[i] != '\0')
		i += 1;
	if (file[i] == '\0')
	{
		ft_puterror(DICT_ERROR_MSG);
		return (0);
	}
	j = 0;
	while (file[i] != '\n')
	{
		if(file[i] != ' ')
		{
			str[j] = file[i];
			j++;
		}
		i++;
		
	}
	str[j] = '\0';
	return (str);
}

int	get_zero(char *str)
{
	int	len;
	int	zeroes;

	zeroes = 0;
	len = 0;
	while (str[len] != ':')
		len++;
	if (len == 0)
	{
		ft_puterror(DICT_ERROR_MSG);
		return (-3);
	}
	else if (len == 1)
		return (0);
	else
	{
		len = 1;
		while (str[len] != ':')
		{
			len++;
			zeroes++;
		}
		return (zeroes);
	}
}

int	get_key(char *str)
{
	int	i;
	int	len;

	len = 0;
	while (str[len] != ':')
		len++;
	i = 0;
	if (len == 0)
	{
		ft_puterror(DICT_ERROR_MSG);
		return (-3);
	}
	else if (len == 1)
		return (str[i] - '0');
	else if (len >= 2 && ('1' <= str[i + 1] && str[i + 1] <= '9'))
	{
		return (((str[i] - '0') * 10) + str[i + 1] - '0');
	}
	else
		return (str[i] - '0');
}

void	rd_dict(char *file)
{
	int				fd;
	int				bytes_read;
	char			*dict_name = "numbers.dict";

	fd = open(dict_name, O_RDONLY);
	if (fd < 0)
		ft_puterror(DICT_ERROR_MSG);
	else
	{
		bytes_read = read(fd, file, 1024);
		if (bytes_read < 0)
		{
			ft_puterror(DICT_ERROR_MSG);
			close(fd);
		}
		file[bytes_read] = '\0';
		close(fd);
	}
}

void	parse_dict(t_dict_chunk *t_dict, char *file)
{
	char	str[4096];
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (file[k] != '\0')
	{
		j = 0;
		while (file[k] != '\n' && file[k] != '\0')
			str[j++] = file[k++];
		str[j] = '\0';
		if (file[k] == '\n')
			k++;
		t_dict[i].value = get_key(str);
		t_dict[i].zeroes = get_zero(str);
		t_dict[i].str = get_str(str);
		i++;
	}
}