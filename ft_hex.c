/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ocrobin           #+#    #+#             */
/*   Updated: 2024/06/13 11:54:41 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_hexa_len(unsigned long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_hex(unsigned long num, const char mode)
{
	if (num >= 16)
	{
		ft_hex(num / 16, mode);
		ft_hex(num % 16, mode);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (mode == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (mode == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned long num, const char mode)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hex(num, mode);
	return (ft_hexa_len(num));
}
