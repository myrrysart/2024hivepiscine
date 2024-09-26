/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:08:06 by Jyniemit          #+#    #+#             */
/*   Updated: 2024/09/22 21:53:55 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
char    *fill_buff_from_file(int fd)
{
    int     i;
    int     chunk_size;
    int     total;
    char    *result;

    total = 0;
    chunk_size = 1024;
    result = malloc(sizeof(char) * (chunk_size + 1));
    if (!result)
    {
        ft_puterror("Memory allocation failed\n");
        return (NULL);
    }
    while ((i = read(fd, result + total, chunk_size - total)) > 0)
    {
        ft_putstr("Read ");
        ft_putnbr(i);
        ft_putstr(" bytes\n");
        total += i;
        // Handle buffer resize if needed
    }
    if (i == -1)
    {
        ft_puterror("Read error occurred\n");
        free(result);
        return (NULL);
    }
    if (total == 0)
    {
        ft_puterror("File is empty\n");
        free(result);
        return (NULL);
    }
    result[total] = '\0';
    ft_putstr("Total bytes read: ");
    ft_putnbr(total);
    ft_putstr("\n");
    return (result);
}
//char	*fill_buff_from_file(int fd)
//{
//	int	i;
//	int	chunk_size;
//	int	total;
//	char	*result;
//
//	total = 0;
//	i = 0;
//	chunk_size = 1024;
//	result = malloc(sizeof(char) * (chunk_size + 1));
//	if (!result)
//		return (NULL);
//	while ((i = read(fd, result + total, chunk_size - total)) > 0)
//	{
//		total += i;
//		//if (total == chunk_size)
//		//allocate more memory to result
//	}
//	if (i == -1)
//	{
//		free(result);
//		return (NULL);
//	}
//	*result = '\0';
//	return (result);
//}
char    *open_file(char *source)
{
    int     fd;
    char    *buff;

    fd = open(source, O_RDONLY);
    if (fd == -1)
    {
        ft_puterror("Error opening file: ");
        ft_puterror(source);
        ft_puterror("\n");
        return (NULL);
    }
    ft_putstr("File opened successfully. FD: ");
    ft_putnbr(fd);
    ft_putstr("\n");
    buff = fill_buff_from_file(fd);
    close(fd);
    return (buff);
}
//char	*open_file(char *source)
//{
//	int	fd;
//	char	*buff;
//
//	fd = open(source, O_RDONLY);
//	if (fd == -1)
//		return (NULL);
//
//	buff = fill_buff_from_file(fd);
//	close(fd);
//	return (buff);
//}

int	main(int argc, char **argv)
{
	int	len;
	t_number_chunk	*input;
	t_dict_chunk	*dictionary;
	char	*file;

	len = 0;
	input = NULL;
	dictionary = NULL;
	file = NULL; 
	dictionary = malloc(sizeof(t_dict_chunk) * 1024);
	if (argc < 2 || argc > 3)
	{
		ft_puterror("Error with argument count");
		return (1);
	}
	//and then we code rest of the code in here!
	if (argc == 2)
	{
		ft_putstr("This should be the written form of the input.");
		ft_putstr(argv[1]);
		len = parse_numbers(argv[1], &input);
		file = open_file("numbers.dict"); 
		if (!(*file))
		{
			ft_puterror("Error with file buffer.");
			return (1);
		}
		parse_dict(dictionary, file);
		test_print_struct(&input, len);

		convert_numbers(dictionary, input, len);
	}
	else if (argc == 3)
	{
		ft_putstr("This should be the dictionary, and the written form of the second input based on the dictionary.");
		ft_putstr(argv[1]);
		len = parse_numbers(argv[1], &input);
		file = open_file(argv[1]); 
		parse_dict(dictionary, file);
		ft_putstr(argv[2]);
		test_print_struct(&input, len);

		convert_numbers(dictionary, input, len);
	}
	free(input);
	free(dictionary);
	ft_putstr("\nhello rush02!");
	return (0);
}
