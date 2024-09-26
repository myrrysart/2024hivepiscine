/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:26:02 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/22 21:28:49 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef    RUSH02_H
# define    RUSH02_H
# include    <unistd.h>
# include    <stdlib.h>
# include    <fcntl.h>
# include    <stdio.h>
# include    <string.h>

typedef struct s_number_chunk
{
	int	value;
	int	zeroes;
}	t_number_chunk;

typedef struct s_dict_chunk
{
	int	value;
	int	zeroes;
	char	*str;
}	t_dict_chunk;

# define DICT_ERROR_MSG "Dict Error\n"
# define ERROR_MSG "Error\n"

void	ft_putnbr(int nb);
void	test_print_struct(t_number_chunk **result, int len);
void	ft_putstr(char *str);
void	ft_output(char *str);
void	ft_puterror(char *str);
int	convert_numbers(t_dict_chunk *t_dict, t_number_chunk *t_number, int len);

void		parse_dict(t_dict_chunk *t_dict, char *file);
int		parse_numbers(char *str, t_number_chunk **result);
void	parse_dict(t_dict_chunk *t_dict, char *file);
void	rd_dict(char *file);
#endif
