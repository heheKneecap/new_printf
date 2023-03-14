#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdbool.h>

int	    ft_print_hex(unsigned int num, const char format);
int	    ft_print_ptr(unsigned long long ptr);
int 	ft_num_len(unsigned int n);
int	    ft_printf(const char *str, ...);
int 	ft_printpercent(void);
int 	ft_printnbr(int n);
int	    ft_printstr(char *str);
int	    ft_printchar(int c);
int 	ft_formats(va_list args, const char format);
void	ft_putstr(char *str);


#endif 