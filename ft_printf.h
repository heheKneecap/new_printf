#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdbool.h>

int	    ft_printf(const char *str, ...);
int	    ft_do_hex(unsigned int num, const char format);
int	    ft_do_pointer(unsigned long long ptr);
int 	ft_num_len(unsigned int n);
int 	ft_do_percent(void);
int 	ft_do_nbr(int n);
int	    ft_do_str(char *str);
int	    ft_do_char(int c);
int 	ft_formats(va_list args, const char format);
int     ft_hex_len(unsigned	int num);
int	    ft_ptr_len(unsigned long long num);
void    do_number(unsigned int n);
void	ft_put_ptr(unsigned long long num);
void	ft_put_hex(unsigned int num, const char format);
void	ft_putstr(char *str);
void	ft_putchar_fd(char c, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);

#endif