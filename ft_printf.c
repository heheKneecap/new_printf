#include "ft_printf.h"

int	ft_do_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	do_len;

	do_len = 0;
	if (format == 'c')
		do_len += ft_do_char(va_arg(args, int));
	else if (format == 's')
		do_len += ft_do_str(va_arg(args, char *));
	else if (format == 'p')
		do_len += ft_do_pointer(va_arg(args, long long));
	else if (format == 'd' || format == 'i')
		do_len += ft_do_nbr(va_arg(args, int));
	else if (format == 'u')
		do_len += ft_num_len(va_arg(args, unsigned long int));
	else if (format == 'x' || format == 'X')
		do_len += ft_do_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		do_len += ft_do_percent();
	return (do_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		do_len;

	i = 0;
	do_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != 0)
		{
			do_len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			do_len += ft_do_char(str[i]);
		i++;
	}
	va_end(args);
	return (do_len);
}