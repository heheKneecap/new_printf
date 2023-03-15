/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:53:54 by mshchuts          #+#    #+#             */
/*   Updated: 2023/03/15 14:58:38 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	do_number(unsigned int n)
{
	char	c;

	if (n > 9)
	{
		do_number(n / 10);
		do_number(n % 10);
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
	do_number(n);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
