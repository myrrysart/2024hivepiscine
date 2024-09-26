int	ft_factorial(int nb)
{
	int	result;

	result = nb;
	if (!nb)
		return (1);
	result *= ft_factorial(result -1);
	return (result);
}

int	main(void)
{
	int	nb;

	nb = 5;
	ft_factorial(nb);
	return (0);
}
