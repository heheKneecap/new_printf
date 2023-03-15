#include "ft_printf.h"

void    print_number(unsigned int n)
{
	char	c;

	if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

int	ft_num_len(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	print_number(n);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}