
#include "rush02.h"

int	convert_numbers(t_dict_chunk *t_dict, t_number_chunk *t_number, int len)
{
	int i;
	int j;
	int zero_flag;
	i = 0;
	j = 0;
	zero_flag = 1;
	while (j < len)
	{
		i = 0;
		while (t_dict[i].str)
		{
			if (t_number[j].value == t_dict[i].value &&
				t_number[j].zeroes == t_dict[i].zeroes &&
				zero_flag == 1)
			{
				ft_output(t_dict[i].str);
				zero_flag = 0;
			}
			i++;
		}
		i = 0;
		while (t_dict[i].str)
		{
			if (t_number[j].value == t_dict[i].value &&
				t_number[j].zeroes == t_dict[i].zeroes &&
				zero_flag == 1)
			{
				ft_output(t_dict[i].str);
				zero_flag = 0;
			}
			i++;
		}
		j++;
	}
	ft_output("\n");
	return 0;
}
